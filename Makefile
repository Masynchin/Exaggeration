.PHONY: letters numbers

letters:
	g++ ./letters.cpp -o ./main.o && ./main.o

numbers:
	g++ ./numbers.cpp -o ./main.o && ./main.o
