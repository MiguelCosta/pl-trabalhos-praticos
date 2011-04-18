
default: all

clean:
	rm *.o

tag: lex.yy.c categoria.o
	gcc -o tag lex.yy.c categoria.o -lfl


lex.yy.c : b.l categoria.h
	flex b.l

categoria.o : categoria.c categoria.h
	gcc -c categoria.c 

all: tag
