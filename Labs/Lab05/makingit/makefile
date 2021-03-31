output: bSearch.o bubble.o database.o db.o parse.o set.o stack.o sum.o
	gcc bSearch.o bubble.o database.o db.o parse.o set.o stack.o sum.o -o output

bSearch.o: bSearch.c sortAndSearch.h defs.h 
	gcc -c bSearch.c

bubble.o: bubble.c set.c defs.h 
	gcc -c bubble.c

database.o: database.c defs.h set.h
	gcc -c database.c

db.o: db.c defs.h
	gcc -c db.c

parse.o: parse.c parse.h
	gcc -c parse.c

set.o: set.c db.h set.h
	gcc -c set.c

stack.o: stack.c stack.h
	gcc -c stack.c

sum.o: sum.c
	gcc -c sum.c

clean:
	rm *.o output

run:
	./output < data
