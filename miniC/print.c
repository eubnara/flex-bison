#include <stdio.h>
#include <stdlib.h>
#include "print.h"
#include "symboltable.h"

//TODO: delete later
//extern struct PROGRAM *head;
extern FILE *fp;
extern FILE *fp2;

//global variable for making symboltable
int _rowNumber;
Type_e _curType;


//print symboltable, called before entering visitDeclaration
void printTitle(char* fname) {

    _rowNumber = 1;

    fprintf( fp2, "Function name : %s\n",fname);
    fprintf( fp2, "%10s%10s%10s%10s\n", "count","type","name","array","role");
}



void visitDeclaration   (struct DECLARATION* decl) {
    if(decl->prev != NULL)
        visitDeclaration(decl->prev);
    switch(decl->t) {
        case eInt:
            fprintf (fp, "int ");    
            _curType = eInt;
            break;
        case eFloat:
            fprintf (fp, "float ");
            _curType = eFloat;
            break;
        default:
            fprintf(stderr, "Declaration does not exist.\n");
            exit(1);
    }
    visitIdentifier(decl->id);
    fprintf (fp, ";\n");
}
void visitFunction      (struct FUNCTION* func) {
    if(func->prev != NULL)
        visitFunction(func->prev);
    switch(func->t) {
        case eInt:
            fprintf (fp, "int ");    
            break;
        case eFloat:
            fprintf (fp, "float ");
            break;
        default:
            fprintf(stderr, "Declaration does not exist.\n");
            exit(1);
    }
    fprintf (fp, "%s (", func->ID);//function name
    if(func->param != NULL)
        visitParameter(func->param);    //parameter 
    fprintf (fp, ")\n");//function name
    visitCompoundStmt(func->cstmt); //compoundStmt
    fprintf(fp, "\n");
}
void visitIdentifier    (struct IDENTIFIER* iden) {
    if(iden->prev != NULL) {
        visitIdentifier(iden->prev);
        fprintf(fp, ", ");
    }
    fprintf (fp, "%s", iden->ID);
    if(iden->intnum > 0) {
        fprintf (fp, "[%d]", iden->intnum);
    } else if(iden->intnum < 0) {
        fprintf(stderr, "minus array");
    } else { 
        //scalar
    }
}
void visitStmt          (struct STMT* stmt) {
    //TODO
    if(stmt->prev != NULL)
        visitStmt(stmt->prev);
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
            if(stmt->stmt.return_ == NULL){
                fprintf (fp, "return;");
            }
            else {
                fprintf (fp, "return ");
                visitExpr(stmt->stmt.return_);
                fprintf (fp, ";");
            }
            break;

        case eWhile:
            visitWhile_s(stmt->stmt.while_);
            return;
        case eFor:
            visitFor_s(stmt->stmt.for_);
            return;
        case eIf:
            visitIf_s(stmt->stmt.if_);
            return;

        case eCompound:
            visitCompoundStmt(stmt->stmt.cstmt_);
            return;
            //break;

        case eSemi:
            fprintf(fp, ";");
            break;

    }
    fprintf(fp, "\n");
}
void visitParameter     (struct PARAMETER* param) {
    if(param->prev != NULL) {
        visitParameter(param->prev);
        fprintf (fp, ", ");
    }
    switch(param->t) {
        case eInt:
            fprintf (fp, "int ");    
            break;
        case eFloat:
            fprintf (fp, "float ");
            break;
        default:
            fprintf(stderr, "Declaration does not exist.\n");
            exit(1);
    }

    visitIdentifier(param->id);

}
void visitCompoundStmt  (struct COMPOUNDSTMT* cstmt) {
    fprintf(fp, "{\n");
    if(cstmt->decl != NULL) { 

        visitDeclaration(cstmt->decl);
    }
    if(cstmt->stmt != NULL)
        visitStmt(cstmt->stmt);
    fprintf(fp, "}\n");
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
}
void visitCallStmt      (struct CALL* call) {
    fprintf(fp, "%s(", call->ID);
    if(call->arg != NULL) {
        visitArg(call->arg);
    }
    fprintf(fp, ")");
}
void visitArg           (struct ARG* arg) {
    if(arg->prev != NULL) {
        visitArg(arg->prev);
        fprintf(fp,", ");
    }   
    visitExpr(arg->expr);
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
        fprintf(fp, "while (");
        visitExpr(while_s->cond);
        fprintf(fp, ");\n");
    } else {
        fprintf(fp, "while (");
        visitExpr(while_s->cond);
        fprintf(fp, ")\n");
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
    fprintf(fp, ")\n");
    visitStmt(if_s->if_);
    if (if_s->else_ != NULL) {
        fprintf(fp,"\nelse\n");
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
