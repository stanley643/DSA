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
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	int *ptr = (int *)malloc(2*sizeof(int));

	if (ptr == NULL)
	{
		printf("Memory not available!");
		exit(1);
	}

	printf("Enter the two numbers: \n");
	for (i = 0; i < 2; i++)
		scanf("%d", ptr + i);

	//memory allocation for 2 more integers
	
	ptr = (int *)realloc(ptr, 4*sizeof(int));
	if (ptr == NULL)
	{
		printf("Memory not available");
		exit(1);
	}

	printf("Enter 2 more integers: \n");
	for (i = 2; i < 4; i++)
		scanf("%d", ptr +i);


	//printing the values
	for(i = 0; i<4; i++)
		printf("%d ", *(ptr + i));
	return 0;
}
