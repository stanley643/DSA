/*
 * malloc is a built in function declared in the header file <stdlib.h>
 *
 * SYNTAX:  (void* )malloc(size_t size)
 * size_t is defined is <stdlib.h> as unsigned int.
 *
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, n;
	printf("Enter the number of integers: ");
	scanf("%d", &n);
	int *ptr = (int *)malloc(n*sizeof(int));

	if (ptr == NULL)
	{
		printf("Memory not available.\n");
		exit(1);
	}
	for (i=0; i < n; i++)
	{
		printf("Enter an integer: ");
		scanf("%d", ptr + i);
	}
	for(i = 0; i < n; i++)
		printf("%d\n", *(ptr + i));
	return 0;
}

