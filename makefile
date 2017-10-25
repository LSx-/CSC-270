all:hw2

person.o: Person.cpp Person.h
	g++ -c Person.cpp

main.o: person.o PersonDriver.cpp
	g++ -c PersonDriver.cpp

hw2: main.o person.o
	g++ -o hw2 -Wall main.o person.o

