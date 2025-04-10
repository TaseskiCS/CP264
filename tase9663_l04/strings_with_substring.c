/**
 * -------------------------------------
 * @file  strings_with_substring.c
 * Lab 4 Source Code File
 * -------------------------------------
 * @author name, id, email
 *
 * @version 2025-01-06
 *
 * -------------------------------------
 */
#include "functions.h"

/**
 * Traverses every string in strings and prints the strings that contain substr. Case must match.
 *
 * @param data - the strings_array struct to traverse
 * @param substr - the substring to look for in each string
 */
void strings_with_substring(strings_array *data, char *substr) {
    for (int i=0; i< data->lines; i++) {
        if (strstr(data->strings[i], substr) != NULL){
            printf("%s\n", data->strings[i]);
        }
    }
}