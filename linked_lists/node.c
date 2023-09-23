/**
 * node contains data and a link
 * a node is a self referencial structure
 */

#include "main.h"

struct node 
{
	int data;
	struct node *link;
};

int main()
{
	struct node *head = NULL;
