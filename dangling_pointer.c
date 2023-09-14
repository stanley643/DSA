/**
 * A dangling pointer is a pointer which points to some non-existing memory location.
 * This mostly happens after using free() to deallocate memory allocation.
 * however the pointer still points to that same memory bt the memory isnt available to it. 
 * Hence it becomes a dangling pointer
 */
#include<stdio.h>

int main()
{
	int *ptr = (int *)malloc(sizeof(int));
	...
	...
	free(ptr);/** at this point ptr is dangling pointer */
	ptr = NULL; /** to avoid a ptr been dangling pointer you can allocate it Null */
	return 0;
