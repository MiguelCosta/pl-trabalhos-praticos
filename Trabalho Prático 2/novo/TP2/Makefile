
logoliss: y.tab.o lex.yy.o hashtable.o
	gcc -o logoliss y.tab.o lex.yy.o hashtable.o -lfl

y.tab.o : y.tab.c y.tab.h
	gcc -c y.tab.c

y.tab.c y.tab.h : yacc.y
	yacc -d yacc.y

lex.yy.o : lex.yy.c y.tab.h
	gcc -c lex.yy.c

lex.yy.c : lex.l
	flex lex.l

hashtable.o: hashtable.c hashtable.h
	gcc -c hashtable.c hashtable.h

clean:
	rm *.o gen y.tab.h lex.yy.c


