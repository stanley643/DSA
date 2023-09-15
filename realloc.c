/**
 * realloc() function is used to change the size of the memory block without losing old data.
 *
 * SYNTAX:
 * 	void *realloc(void *ptr, size_t newSize)
 *
 * 	where:
 * 		*ptr is the pointer to the previously allocated memory
 * 		newSize is the new size.
 * 	on failure it returns NULL.	
 *
 * 	eg:
 * 		int *ptr = (int *)malloc(sizeof(int));
 * 		ptr = (int *)realloc(ptr, 2*sizeof(int));
 *
 */

