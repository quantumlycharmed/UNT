output: book.o audioCD.o dvd.o loan.o patron.o libraryItem.o libraryItemCollections.o loans.o patrons.o main.o
	g++  book.o audioCD.o dvd.o loan.o patron.o libraryItem.o libraryItemCollections.o loans.o patrons.o main.o -o output

libraryItemCollections.o: book.h audioCD.h dvd.h libraryItemCollections.h libraryItem.h
	g++ -c libraryItemCollections.cpp

libraryItem.o: libraryItem.h
	g++ -c libraryItem.cpp

book.o: book.h
	g++ -c book.cpp

audioCD.o: audioCD.h
	g++ -c audioCD.cpp

dvd.o: dvd.h
	g++ -c dvd.cpp

loan.o: loan.h
	g++ -c loan.cpp

patron.o: patron.h
	g++ -c patron.cpp

loans.o: loan.h loans.h libraryItem.h book.h dvd.h audioCD.h patron.h
	g++ -c loans.cpp

patrons.o: patron.h patrons.h
	g++ -c patrons.cpp

main.o: loans.h patrons.h libraryItemCollections.h loan.h patron.h libraryItem.h book.h audioCD.h dvd.h
	g++ -c main.cpp

clean:
	rm *.o output

run:
	./output
