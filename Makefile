.PHONY = clean

all: croll

croll: roll.o exe.o
	g++ -std=c++11 -g -o croll exe.o roll.o

roll.o: roll.cpp roll.h dice.h
	g++ -std=c++11 -g -c roll.cpp

exe.o: exe.cpp roll.h dice.h
	g++ -std=c++11 -g -c exe.cpp

clean:
	rm croll exe.o roll.o

