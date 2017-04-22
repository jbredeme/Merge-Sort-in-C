/**
 * Author: Jarid Bredemeier
 * Email: jpb64@nau.edu
 * Date: Wednesday, April 19, 2017
 * File: main.c
 * Copyright © 2016 All rights reserved 
 */

#include <stdlib.h>
#include <stdio.h>
#include "includes/helpers.h"
#include "includes/mergesort.h"

#define SIZE 35
#define MAX_RANGE 500

int main() {
	int *arr1 = (int*)malloc(sizeof(int) * SIZE);	//<= create an array to store integers
	int *arr2 = (int*)malloc(sizeof(int) * SIZE);	//<= create a buffer array
	int i, j;										//<= loop iterator(s)
	
	get_random_nums(arr1, SIZE, MAX_RANGE);	//<= populate an initial array with random numbers from 1 to MAX_RANGE
	
	// iterate through the entire array, adding elements into the buffer array, and then using
	// mergesort on the buffer array and print the results.
	for(i = 0; i < SIZE; i++) {
		printf("Unsorted list:\n");			
		print_array(arr1, i, SIZE);			//<= print the original array
		arr2[i] = arr1[i];					//<= add an element from the array of integers to the buffer array
		mergesort(arr2, (i + 1));				//<= call sort on the buffer array
		printf("Step %d:\nSorted list:\n", (i + 1));	
		print_array(arr2, 0, (i + 1));		//<= print buffer array
		
	}
	
	free(arr1);								//<= deallocate array memory
	free(arr2);								//<= deallocate array memory
	
	return 0;
	
}