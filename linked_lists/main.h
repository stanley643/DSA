#ifndef MAIN_H
#define MAIN_H


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

struct node 
{
	int data;
	struct node *link;
}

void count_of_nodes(struct node *head);

#endif
