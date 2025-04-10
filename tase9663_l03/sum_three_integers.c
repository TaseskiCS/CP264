/**
 * -------------------------------------
 * @file  functions.c
 * Lab 2 Functions Source Code File
 * -------------------------------------
 * @author name, id, email
 *
 * @version 2025-01-06
 *
 * -------------------------------------
 */
#include "functions.h"

/**
 * Reads and sums three comma-delimited integers on the same line from the keyboard.
 * Continues until a line of integers is correctly entered.
 * Prompt: "Enter three comma-separated integers: "
 * Error: "The integers were not properly entered.\n"
 *
 * @return - the sum of integers read from the keyboard
 */

int sum_three_integers(void) {

    // your code here
	int num1;
	int num2;
	int num3;
	int sum;
	char line[STRING_SMALL];
	printf("Enter three comma-separated integers: ");
	while (fgets(line, sizeof(line), stdin)) {
		if (sscanf(line, "%d, %d, %d", &num1, &num2, &num3) == 3) {
			sum = num1 + num2 + num3;
			break;
		}
		else {
			printf("The integers were not properly entered.\n");
			printf("Enter three comma-separated integers: ");
		}
	}
	return sum;

}