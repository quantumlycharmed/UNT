runDB		: bSearch.o bubble.o db.o set.o parse.o main.o stack.o
		cc -g bSearch.o bubble.o db.o set.o parse.o main.o stack.o -o runDB

bSearch.o	: db.h defs.h set.h sortAndSearch.h bSearch.c
		cc -c -g bSearch.c

bubble.o	: db.h defs.h set.h sortAndSearch.h bubble.c
		cc -c -g bubble.c

db.o		: db.h defs.h set.h sortAndSearch.h db.c
		cc -c -g db.c

parse.o		: db.h defs.h set.h stack.h sortAndSearch.h parse.h parse.c
		cc -c -g parse.c

set.o		: db.h defs.h set.h sortAndSearch.h set.c
		cc -c -g set.c

stack.o		: stack.h set.h stack.c
		cc -c -g stack.c

main.o		: db.h defs.h set.h sortAndSearch.h main.c
		cc -c -g main.c

clean		:
		rm runDB *.o 
