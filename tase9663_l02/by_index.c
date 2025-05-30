/**
 * -------------------------------------
 * @file  by_index.h
 * Lab 2 Index Functions Header File
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
 * Uses array indexing.
 *
 * @param values - array of int
 * @param size - size of values
 */
void fill_values_by_index(int values[], int size){
    for (int i=1;i<size;i++){
        values[i] = i;
    }
}

/**
 * Populates squares with the squares of the corresponding integers in values.
 * Uses array indexing.
 *
 * @param values - array of int
 * @param squares - array of int, each a square of corresponding int in values
 * @param size - size of values and squares
 */
void fill_squares_by_index(int values[], long int squares[], int size){
    // int size = sizeof(values);
    // int length = size / sizeof(int);
    for (int i=0; i < size; i++){
        squares[i] = values[i] * values[i];
    }  
}

/**
 * Prints the contents of values and squares in two columns.
 * Uses array indexing.
 *
 * @param values - array of int
 * @param squares - array of int, each a square of corresponding int in values
 * @param size - size of values
 */
void print_by_index(int values[], long int squares[], int size){
    printf("Value  Square\n");
    printf("-----  ----------\n");
    for (int i=0; i<size; i++){
        printf("%5d  %10ld\n", values[i], squares[i]);
    }
}

