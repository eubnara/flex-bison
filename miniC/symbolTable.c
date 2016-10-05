#include <stdio.h>
#include <stdlib.h>
#include "symbolTable.h"

//TODO: delete later
//extern struct PROGRAM *head;
extern FILE *fp;

void visitDeclaration   (struct DECLARATION* decl) {
    switch(decl->t) {
        case eInt:
            fprintf (fp, "Int ");    
            break;
        case eFloat:
            fprintf (fp, "Float ");
            break;
        default:
            fprintf(stderr, "Declaration does not exist.\n");
            exit(1);
    }

    visitIdentifier(decl->id);
    fprintf (fp, ";\n");
    if(decl->prev != NULL)
        visitDeclaration(decl->prev);
}
void visitFunction      (struct FUNCTION* func) {
    switch(func->t) {
        case eInt:
            fprintf (fp, "Int ");    
            break;
        case eFloat:
            fprintf (fp, "Float ");
            break;
        default:
            fprintf(stderr, "Declaration does not exist.\n");
            exit(1);
    }
    fprintf (fp, "%s ", func->ID);//function name
    visitParameter(func->param);    //parameter 
    visitCompoundStmt(func->cstmt); //compoundStmt
    if(func->prev != NULL)
        visitFunction(func->prev);
}
void visitIdentifier    (struct IDENTIFIER* iden) {
    fprintf (fp, "%s", iden->ID);
    if(iden->intnum > 0) {
        fprintf (fp, "[%d]", iden->intnum);
    } else if(iden->intnum < 0) {
        fprintf(stderr, "minus array");
    } else { 
        //scalar
    }
    if(iden->prev == NULL)
        fprintf(fp, ";\n");
    else {
        fprintf(fp, ", ");
        visitIdentifier(iden->prev);
    }
}
void visitStmt          (struct STMT* stmt) {
    switch(stmt->s) {
        case eAssign:
            visitAssignStmt(stmt->stmt.assign_);
            fprintf(fp, ";");
            break;

        case eCall:
            visitCallStmt(stmt->stmt.call_);
            fprintf(fp, ";");
            break;

        case eRet:
            if(stmt->stmt.return_ == NULL)
                fprintf (fp, "return;");
            else {
                fprintf (fp, "return ");
                visitExpr(stmt->stmt.return_);
            }
            break;

        case eWhile:
            visitWhile_s(stmt->stmt.while_);
            break;

        case eFor:
            visitFor_s(stmt->stmt.for_);
            break;

        case eIf:
            visitIf_s(stmt->stmt.if_);
            break;

        case eCompound:
            visitCompoundStmt(stmt->stmt.cstmt_);
            break;

        case eSemi:
            fprintf(fp, ";");
            break;

    }
    fprintf(fp, "\n");
    if(stmt->prev != NULL)
        visitStmt(stmt->prev);
}
void visitParameter     (struct PARAMETER* param) {
    switch(param->t) {
        case eInt:
            fprintf (fp, "Int ");    
            break;
        case eFloat:
            fprintf (fp, "Float ");
            break;
        default:
            fprintf(stderr, "Declaration does not exist.\n");
            exit(1);
    }

    visitIdentifier(param->id);
    if(param->prev != NULL)
        visitParameter(param->prev);
}
void visitCompoundStmt  (struct COMPOUNDSTMT* cstmt) {
    fprintf(fp, "{\n");
    if(cstmt->decl != NULL) 
        visitDeclaration(cstmt->decl);
    if(cstmt->stmt != NULL)
        visitStmt(cstmt->stmt);
    fprintf(fp, "\n}\n");
}
void visitAssignStmt    (struct ASSIGN* assign) {
    fprintf(fp, "%s ",assign->ID);
    if(assign->index != NULL) {
        fprintf(fp, "[");
        visitExpr(assign->index);
        fprintf(fp, "]");
    }
    fprintf(fp, " = ");
    visitExpr(assign->expr);
    fprintf(fp, "\n");
}
void visitCallStmt      (struct CALL* call) {
    fprintf(fp, "%s(", call->ID);
    if(call->arg != NULL) {
        visitArg(call->arg);
    }
    fprintf(fp, ")\n");
}
void visitArg           (struct ARG* arg) {
    visitExpr(arg->expr);
    if(arg->prev != NULL) {
        fprintf(fp,", ");
        visitArg(arg->prev);
    }   
}
void visitExpr          (struct EXPR* expr) {
    switch(expr->e) {
        case eUnop:
            fprintf(fp, "-");
            visitExpr(expr->expression.unop_->expr);
            break;


        case eAddi:
            visitExpr(expr->expression.addiop_->lhs);
            if(expr->expression.addiop_->a == ePlus)
                fprintf(fp, " + ");
            else
                fprintf(fp, " - ");
            visitExpr(expr->expression.addiop_->rhs);
            break;


        case eMulti:
            visitExpr(expr->expression.multop_->lhs);
            if(expr->expression.multop_->m == eMult)
                fprintf(fp, " * ");
            else
                fprintf(fp, " / ");
            visitExpr(expr->expression.multop_->rhs);
            break;

        case eRela:
            visitExpr(expr->expression.relaop_->lhs);
            switch(expr->expression.relaop_->r) {
                case eLT:
                    fprintf(fp, " < ");
                    break;

                case eGT:
                    fprintf(fp, " > ");
                    break;

                case eLE:
                    fprintf(fp, " <= ");

                    break;

                case eGE:
                    fprintf(fp, " >= ");
                    break;
            }
            visitExpr(expr->expression.relaop_->rhs);
            break;

        case eEqlt:
            visitExpr(expr->expression.eqltop_->lhs);
            if(expr->expression.eqltop_->e == eEQ) {
                fprintf(fp, " == ");
            } else {
                fprintf(fp, " != " );
            }
            visitExpr(expr->expression.eqltop_->rhs);
            break;

        case eCallExpr:
            visitCallStmt(expr->expression.call_);
            break;

        case eExpr:
            fprintf(fp, "(");
            visitExpr(expr->expression.bracket);
            fprintf(fp, ")");
            break;

        case eId:
            visitId_s(expr->expression.ID_);
            break;
        case eIntnum:
            fprintf(fp, "%d", expr->expression.intnum);
            break;

        case eFloatnum:
            fprintf(fp, "%f", expr->expression.floatnum);
            break;
    }

}
void visitWhile_s       (struct WHILE_S* while_s) {
    if(while_s->do_while == true) {
        fprintf(fp, "do");
        visitStmt(while_s->stmt);
        fprintf(fp, "while");
        visitExpr(while_s->cond);
    } else {
        fprintf(fp, "while");
        visitExpr(while_s->cond);
        visitStmt(while_s->stmt);
    }
}
void visitFor_s         (struct FOR_S* for_s) {
    fprintf(fp, "for (");
    visitAssignStmt(for_s->init);
    fprintf(fp, "; ");  
    visitExpr(for_s->cond);
    fprintf(fp, "; ");  
    visitAssignStmt(for_s->inc);
    fprintf(fp, ")\n");
    visitStmt(for_s->stmt);
}
void visitIf_s          (struct IF_S* if_s) {
   fprintf(fp, "if (");
   visitExpr(if_s->cond);
   fprintf(fp, ")");
   visitStmt(if_s->if_);
    if (if_s->else_ != NULL) {
        fprintf(fp,"else");
        visitStmt(if_s->else_);
    }
}
void visitId_s          (struct ID_S* id_s) {
   fprintf(fp,"%s",id_s->ID);
   if(id_s->expr != NULL) {
    fprintf(fp, "[");
    visitExpr(id_s->expr);
    fprintf(fp, "]");
   }
}
