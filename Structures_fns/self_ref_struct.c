/**
 * self referential structures are those structures in which one or more pointers point to the structure of the same type.
 * syntax:
 * 	struct self {
 * 		int p;
 * 		struct self *ptr;
 * 	};
 */

#include "main.h"

struct code
{
	int i;
	char c;
	struct code *ptr;
};

int main()
{
	struct code var1;

	var1.i = 65;
	var1.c = 'A';
	var1.ptr = NULL;
