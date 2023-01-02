.PHONY: letters numbers binary crossed

letters:
	g++ ./solutions/letters.cpp -o ./main.o && ./main.o

numbers:
	g++ ./solutions/numbers.cpp -o ./main.o && ./main.o

binary:
	g++ ./solutions/binary.cpp -o ./main.o -std=c++11 -w && ./main.o

crossed:
	g++ ./solutions/crossed.cpp -o ./main.o -std=c++11 && ./main.o
