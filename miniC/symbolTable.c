#include <stdio.h>
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
void visitFunction      (struct FUNCTION* func);
void visitIdentifier    (struct IDENTIFIER* iden);
void visitStmt          (struct STMT* stmt);
void visitParameter     (struct PARAMETER* param);
void visitCompoundStmt  (struct COMPOUNDSTMT* cstmt);
void visitAssignStmt    (struct ASSIGN* assign);
void visitCallStmt      (struct CALL* call);
void visitArg           (struct ARG* arg);
void visitExpr          (struct EXPR* expr);
void visitWhile_s       (struct WHILE_S* while_s);
void visitFor_s         (struct FOR_S* for_s);
void visitIf_s          (struct IF_S* if_s);
