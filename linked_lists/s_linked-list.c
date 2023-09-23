#include "main.h"

int main()
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	struct node *second = malloc(sizeof(struct node));
	second->data = 98;
	second->link = NULL;
	head->link = second;

	return 0;
}
