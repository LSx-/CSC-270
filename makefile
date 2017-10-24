all:temp

temperature.o: temperature.cpp temperature.h
	g++ -c temperature.cpp

main.o: temperature.o main.cpp
	g++ -c main.cpp

temp: main.o temperature.o
	g++ -o temp main.o temperature.o
