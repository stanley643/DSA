#include "main.h"

int main()
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;
	return 0;
}
