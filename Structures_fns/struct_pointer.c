#include "main.h"
/**
 * instead of passing structure members individually,
 * it is a good practice to pass a structure  as a pointer if the struct is tooo big.
 *
 */

struct point
{
	int x;
	int y;
};

void print(struct point *ptr)
{
	printf("%d %d\n", ptr->x, ptr->y);
}

int main()
{
	struct point p1 = {23, 45};
	struct point p2 = {56, 90};
	print(&p1);
	print(&p2);
	return 0;
}
