/**
 * Author: Jarid Bredemeier
 * Email: jpb64@nau.edu
 * Date: Wednesday, April 19, 2017
 * File: mergesort.c
 * Copyright © 2016 All rights reserved 
 */

#include <stdlib.h>
#include <stdio.h>

/**
 * merge takes two integer arrays and arranges them in ascending order into a larger 
 * array.
 *
 * pram arr1 first array.
 * pram arr1_num number of elements in arr1.
 * pram arr2 second array.
 * pram arr2_num  number of elements in arr2.
 * pram arr where the sorted values are stored, sorting is done in ascending order.
 */
void merge(int *arr1, int arr1_num, int *arr2, int arr2_num, int *arr) {
	int i, j, k;		//<= loop iterators
	
	for(k = 0, i = 0, j = 0; k < (arr1_num + arr2_num); k++) {
		if((i < arr1_num) && (j < arr2_num)) {	//<= ensure neither array is indexed out of range
			if(arr1[i] < arr2[j]) {				//<= swap values
				arr[k] = arr1[i];
				i += 1;
				
			} else {
				arr[k] = arr2[j];
				j += 1;
				
			}			
			
		} else if(i < arr1_num) {				//<= append any remaining values from arr1 to arr
			arr[k] = arr1[i];
			i += 1;
			
		} else {								//<= append any remaining values from arr2 to arr
			arr[k] = arr2[j];
			j += 1;
		}
		
	}
	
}

/**
 * merge_v2 logically works the same as merge but implemented using while loops instead of for loops
 *
 * pram arr1 first array.
 * pram arr1_num number of elements in arr1.
 * pram arr2 second array.
 * pram arr2_num  number of elements in arr2.
 * pram arr where the sorted values are stored, sorting is done in ascending order.
 */
void merge_v2(int *arr1, int arr1_num, int *arr2, int arr2_num, int *arr) {
	int i, j, k;		//<= loop iterators
	i = j = k = 0;		//<= initialize loop iterators
	
	while((i < arr1_num) && (j < arr2_num)) {
		if(arr1[i] < arr2[j]) {
			arr[k] = arr1[i];
			i += 1;
			k += 1;
			
		} else {
			arr[k] = arr2[j];
			j += 1;
			k += 1;
			
		}
			
	}
	
	while(i < arr1_num) {	//<= takes any remaining values and adds them to the tail of the array
		arr[k] = arr1[i];
		i += 1;
		k += 1;
		
	}
	
	while(j < arr2_num) {	//<= takes any remaining values and adds them to the tail of the array
		arr[k] = arr2[j];
		j += 1;
		k += 1;
			
	}
	
}

/**
 * mergesort divides an array into halves until an atomic level then follows back up the recursive stack calling the
 * merge function.
 *
 * pram arr an array of intergers
 * pram num_elements is the number of elements in arr
 */
void mergesort(int *arr, int num_elements) {
	int *arr1;							//<= pointer for first half of the array
	int *arr2;							//<= pointer for second half of the array
	int middle;							//<= middle value of the total number of elements
	int rmng;							//<= remaining value of the total number of elements
	int i, j;							//<= loop iterators
	
	if(num_elements >= 2) {
		middle = num_elements / 2;		//<= divide the array into halves (floor)
		rmng = num_elements - middle;	//<= calcuate the remaining number of elements
		
		arr1 = (int*)malloc(sizeof(int) * middle);
		arr2 = (int*)malloc(sizeof(int) * rmng);
		
		// Copy the first half of the array into a new subarray
		for(i = 0; i < middle; i++) {
			arr1[i] = arr[i];
			
		}
		
		// Copy the second half of the array into a new subarray
		for(i = middle, j = 0; i < num_elements; i++, j++) {
			arr2[j] = arr[i];
			
		}
		
		mergesort(arr1, middle);				//<= recursively call sort on the fist half
		mergesort(arr2, rmng);					//<= recursively call sort on the second half
		merge(arr1, middle, arr2, rmng, arr);	//<= merge the two halves into a single array
		free(arr1);								//<= deallocate memory from arr1 malloc
		free(arr2);								//<= deallocate memory from arr2 malloc
		
	}
	
}