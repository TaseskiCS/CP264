/**
 * -------------------------------------
 * @file  by_ptr.h
 * Lab 2 Pointer Functions Header File
 * -------------------------------------
 * @author David Brown, 123456789, dbrown@wlu.ca
 *
 * @version 2025-01-06
 *
 * -------------------------------------
 * DO NOT CHANGE CONTENTS
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Prototypes.

/**
 * Populates values with consecutive integers in the range [1 to size].
 * Uses pointer arithmetic.
 *
 * @param values - array of int
 * @param size - size of values
 */
void fill_values_by_ptr(int *values, int size){
   for (int i=0; i<size;i++){
    // *values points to the first element in values: array
    // so *(values + i) is the same as values[i]
        *(values + i) = i + 1; 
   } 
} 

/**
 * Populates squares with the squares of the corresponding integers in values.
 * Uses pointer arithmetic.
 *
 * @param values - array of int
 * @param squares - array of int, each a square of corresponding int in values
 * @param size - size of values and squares
 */
void fill_squares_by_ptr(int *values, long int *squares, int size){
    for(int i=0;i<size;i++){
        *(squares + i) = (*(values + i)) * (*(values + i));
    } 
}

/**
 * Prints the contents of values and squares in two columns.
 * Uses pointer arithmetic.
 *
 * @param values - array of int
 * @param squares - array of int, each a square of corresponding int in values
 * @param size - size of values and squares
 */
void print_by_ptr(int *values, long int *squares, int size){
    printf("Value  Square\n");
	printf("-----  ----------\n");
	for (int i = 0; i < size; i++) {
		printf("%5d  %10ld\n", *(values + i), *(squares + i));
	}
}

