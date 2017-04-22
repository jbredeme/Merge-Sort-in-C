# Author: Jarid Bredemeier
# Email: jpb64@nau.edu
# Date: Wednesday, April 19, 2017
# File: Makefile.mak
# Copyright © 2016 All rights reserved 
CC = gcc

all: main.o mergesort.o helpers.o
	$(CC) main.o mergesort.o helpers.o -o main
	
main.o: main.c
	$(CC) -c main.c
	
mergesort.o: src/mergesort.c includes/mergesort.h
	$(CC) -c src/mergesort.c
	
helpers.o: src/helpers.c includes/helpers.h
	$(CC) -c src/helpers.c
	
clean:
	rm *.o *.exe