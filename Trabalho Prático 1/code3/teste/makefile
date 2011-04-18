
default: all

clean:
	rm *.o

tag: categoria.o
	gcc -o tag teste.c categoria.o


lex.yy.c : a.l categoria.h
	flex a.l

categoria.o : categoria.c categoria.h
	gcc -c categoria.c 

all: tag
