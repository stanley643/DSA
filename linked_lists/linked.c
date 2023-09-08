#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
//declare a structure
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *middle, *last;

    head = malloc(sizeof(struct node));
    middle = malloc(sizeof(struct node));
    last = malloc(sizeof(struct node));
//putting data into the node
    head->data = 10;
    middle->data = 500;
    last->data = 30;
//adding a link pointer into the node
    head->next = middle;
    middle->next = last;
    last->next = NULL;

//traverse and print data from the node
    struct node *temp = head;

    while(temp != NULL)
    {
        printf("%d \n", temp->data);
        temp = temp->next;
    }


}
