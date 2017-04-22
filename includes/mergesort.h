/**
 * Author: Jarid Bredemeier
 * Email: jpb64@nau.edu
 * Date: Wednesday, April 19, 2017
 * File: mergesort.h
 * Copyright © 2016 All rights reserved 
 */
 
 #ifndef _mergesort_h
	#define _mergesort_h
	/**
	 * sort divides an array into halves until an atomic level then follows back up the recursive stack calling the
	 * merge function.
	 *
	 * pram arr an array of intergers
	 * pram num_elements is the number of elements in arr
	 */
	void mergesort(int *arr, int num_elements);
	
#endif