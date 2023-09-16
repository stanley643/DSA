/**
 * void pointer is a pointer which has no associated data type with it.
 * it can point to any data of any data type and can be typecasted to any type
 *
 */
#include<stdio.h>

int main()
{
	int n = 10;
	void *ptr = &n;

	printf("%d\n", *(int*)ptr);
	return 0;
}
