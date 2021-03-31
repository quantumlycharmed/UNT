output: book.o loan.o patron.o books.o loans.o patrons.o main.o
	g++  book.o loan.o patron.o books.o loans.o patrons.o main.o -o output

book.o: book.h
	g++ -c book.cpp

loan.o: loan.h
	g++ -c loan.cpp

patron.o: patron.h
	g++ -c patron.cpp

books.o: book.h books.h
	g++ -c books.cpp

loans.o: loan.h loans.h book.h patron.h
	g++ -c loans.cpp

patrons.o: patron.h patrons.h
	g++ -c patrons.cpp

main.o: loans.h patrons.h books.h loan.h patron.h book.h
	g++ -c main.cpp

clean:
	rm *.o output

run:
	./output
