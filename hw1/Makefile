all: main

main: main.o BankAccount.o
	g++ -g -o main main.o BankAccount.o

BankAccount.o: BankAccount.cpp BankAccount.h
	g++ -g -c BankAccount.cpp

main.o: main.cpp
	g++ -g -c main.cpp
