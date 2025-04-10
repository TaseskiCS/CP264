/**
 * -------------------------------------
 * @file  sum_integers.c
 * Lab 3 Source Code File
 * -------------------------------------
 * @author name, id, email
 *
 * @version 2025-01-06
 *
 * -------------------------------------
 */
#include "functions.h"

int sum_integers(void) {
	char line[STRING_SMALL] = ""; 				//set string limit to STRING_SMALL = 20
	int num = 0; 								// init variable for nums found in string
	int sum = 0; 								// sum of all nums

	printf("Enter Integers, one per line: ");
	while (fgets(line, sizeof(line), stdin)){ 	// stores whats read from `stdin` into `line` stops when sizeof(line) characters are read
		if (sscanf(line, "%d", &num) == 1){		// checks if the scanned value is an integer and was stored, if it is then store value at num address
			sum +=num;							// adds the num to the sum
		} 
		else {
			break;								// if no int is found then breaks loop
		}
	}
	return sum;
}