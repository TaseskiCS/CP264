/**
 * -------------------------------------
 * @file  name_set_initialize.c
 * Lab 5 Source Code File
 * -------------------------------------
 * @author Heider Ali, 999999999, heali@wlu.ca
 * @author David Brown, 123456789, dbrown@wlu.ca
 *
 * @version 2025-01-06
 *
 * -------------------------------------
 */
#include "name_set.h"

name_set* name_set_initialize() {
    // Allocate memory to the data structure
    name_set *set = malloc(sizeof *set);
    // Initialize the header fields.
    set->front = NULL;
    set->rear = NULL;
    return set;
}

/**
 * Frees all of the nodes in the set, including the header node.
 * Returns a count of the number of nodes freed, including the header node.
 *
 * @param set - pointer to an initialized name_set
 * @return number of nodes freed
 */
int name_set_free(name_set **set) {

    // your code here
	int counter =0;
	

	return counter;

}

BOOLEAN name_set_append(name_set *set, const char *first_name, const char *last_name) {

    // your code here

}

BOOLEAN name_set_contains(const name_set *set, const char *first_name, const char *last_name) {

    // your code here

}

void name_set_print(const name_set *set) {

    // your code here

}