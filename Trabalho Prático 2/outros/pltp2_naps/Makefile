logoliss : y.tab.o lex.yy.o hashtable.o vars.o
	gcc -o logoliss y.tab.o lex.yy.o vars.o hashtable.o -lfl

y.tab.o : y.tab.c
	gcc -c y.tab.c

lex.yy.o : lex.yy.c
	gcc -c lex.yy.c

y.tab.c y.tab.h : logoliss.y
	yacc -d logoliss.y

lex.yy.c : logoliss.l y.tab.h
	flex logoliss.l


hashtable.o : hashtable.c hashtable.h
	gcc -c hashtable.c hashtable.h

vars: vars.o hashtable.o
	gcc -o gen vars.o hashtable.o debug.h

vars.o : vars.c vars.h
	gcc -c vars.c vars.h

clean:
	rm *.o gen y.tab.h lex.yy.c

exe: vars
	./gen
