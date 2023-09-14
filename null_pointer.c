/**
 * a NULL pointer is a pointer that does not point to any memory location. it represents an invalid memory location.
 * when a NULL value is assigned to a pointer ,then the pointer is considered as NULL pointer
 *
 */
#include<stdio.h>

int main()
{
	int *ptr = NULL;
	return 0;
}

/**
 * used to initialize a pointer when that ptr isnt assigned any valid memory address yet.
 * useful for handling errors when using malloc fns
 *
 */
