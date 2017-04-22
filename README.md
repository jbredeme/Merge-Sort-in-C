# Merge Sort in C
This is a simple C program that implements a Merge Sort algorithm. First, it randomly generates an integer array and prints it to the screen. Next it copies a value from the integer array and adds it to a buffer array. The program then performs a merge sort on the elements in the buffer array and prints the results. For each iteration through the integer array the program will print out all the elements that have not yet been added to the buffer. It will then add a new element into the buffer, sort it and once again print the results. Note that there are two versions of the merging function for Merge Sort which can be invoked by simplifying changing the name of the function call from merge to merge_v2 on line 129 in mergesort.c. Although the results and order of time complexity remain the same at O(n log n) for Merge Sort the purpose was to serve simply as an exercise in using while loops instead of a single for loop. Hope you enjoy!

## Usage
```c
make all
./main
```

## Example Output
```c
Unsorted list:
34 44 63 30 1 9 53 57 57 20

Step 1:
Sorted list:
34

Unsorted list:
44 63 30 1 9 53 57 57 20

Step 2:
Sorted list:
34 44

Unsorted list:
63 30 1 9 53 57 57 20

Step 3:
Sorted list:
34 44 63

...
```

## Built With
* Red Hat Enterprise Linux release 2.6.32
* GNU Compiler Collection (GCC) release 4.4.7 
* GNU Make release 3.81

## Author
* **Jarid Bredemeier**