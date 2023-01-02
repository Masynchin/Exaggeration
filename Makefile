.PHONY: letters numbers binary

letters:
	g++ ./letters.cpp -o ./main.o && ./main.o

numbers:
	g++ ./numbers.cpp -o ./main.o && ./main.o

binary:
	g++ ./binary.cpp -o ./main.o -std=c++11 -w && ./main.o
