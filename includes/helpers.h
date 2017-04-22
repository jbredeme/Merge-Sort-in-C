/**
 * Author: Jarid Bredemeier
 * Email: jpb64@nau.edu
 * Date: Wednesday, April 19, 2017
 * File: helpers.h
 * Copyright © 2016 All rights reserved 
 */
 
#ifndef _helpers_h
	#define _helpers_h
	/**
	 * print_array prints out the content of an array
	 *
	 * @pram arr is a pointer to an integer array.
	 * @pram start is the index to start printing the array.
	 * @pram num_elements the number of elements in arr
	 */
	void print_array(int *arr, int start, int num_elements);
	 
	/**
	 * get_random_nums populates an array with random integers.
	 *
	 * @pram arr is a pointer to an integer array.
	 * @pram num_elements the number of elements in arr.
	 * @pram max is the ceiling value for the largest random integer generated.
	 */
	void get_random_nums(int *arr, int num_elements, int max);
	 
#endif