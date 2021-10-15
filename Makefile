.PHONY = clean

all: croll

croll: roll.o exe.o
	clang -std=c++11 -lstdc++ -g -o croll exe.o roll.o

roll.o: roll.cpp roll.h dice.h
	clang -std=c++11 -lstdc++ -g -c roll.cpp

exe.o: exe.cpp roll.h dice.h
	clang -std=c++11 -lstdc++ -g -c exe.cpp

clean:
	rm croll exe.o roll.o
