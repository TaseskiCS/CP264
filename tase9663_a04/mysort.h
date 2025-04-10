/*
--------------------------------------------------
Project: a4q1
File:    mysort.h
Author:  Antonio Taseski
Version: 2025-01-16
--------------------------------------------------
*/

#ifndef MYSORT_H
#define MYSORT_H

// your code document
void select_sort(void *a[], int left, int right);

// your code document
void quick_sort(void *a[], int left, int right);

// your code document
void my_sort(void *a[], int left, int right, int (*cmp)(void*, void*) );

#endif