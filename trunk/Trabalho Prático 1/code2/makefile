
default: all

clean:
	rm *.o

tag: lex.yy.c categoria.o
	gcc -o tag lex.yy.c categoria.o -lfl


lex.yy.c : a.l categoria.h
	flex a.l

categoria.o : categoria.c categoria.h
	gcc -c categoria.c 

all: tag
