#include "main.h"
/**
 * call by reference
 * instead of passing the copies of the struct members, 
 * we can pass their addresses (or references).
 *
 */

struct charset
{
	char s;
	int i;
};

void keyValue(char *s, int *i)
{
	scanf("%c %d", s, i);
}

int  main()
{
	int j;
	struct charset cs;
	keyValue(&cs.s, &cs.i);
	printf("%c %d\n", cs.s, cs.i);
	return 0;
}
