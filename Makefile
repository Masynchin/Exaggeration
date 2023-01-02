.PHONY: letters numbers binary crossed

letters:
	g++ ./letters.cpp -o ./main.o && ./main.o

numbers:
	g++ ./numbers.cpp -o ./main.o && ./main.o

binary:
	g++ ./binary.cpp -o ./main.o -std=c++11 -w && ./main.o

crossed:
	g++ ./crossed.cpp -o ./main.o -std=c++11 && ./main.o
