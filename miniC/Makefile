all:
    flex miniC.l    
    bison -d miniC.y
    gcc -o miniC lex.yy.c miniC.tab.c -lfl -g
