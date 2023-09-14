#include<stdio.h>
/** problems of dangling ptrs maybe segmentation fault like the one of this program */
int* fun()
{
	int num = 10;
	return &num;
}

int main()
{
	int *ptr = NULL;
	ptr = fun();
	printf("%d\n", *ptr);
	return 0;
}
