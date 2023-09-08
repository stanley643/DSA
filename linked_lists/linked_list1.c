// In the below program, we have declared three linked list variables i.e struct node *a, *b, *c.

// You have to do the following tasks.

// Task 1: You need to allocate dynamic memory for those nodes and assign values 100, 200, 300, respectively.

// Task 2: Create the following linked list by connecting the nodes. 


//  c->a->b->NULL;

#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    //declaring nodes
    struct node *a,*b,*c;

    //Implement task 1 here
    a = malloc(sizeof(struct node));
    b = malloc(sizeof(struct node));
    c = malloc(sizeof(struct node));
    
    a->data = 100;
    b->data = 200;
    c->data = 300;




    //Implement task 2 here
    c->next = a;
    a->next = b;
    b->next = NULL;



    //Don't change the below code
    struct node *temp = c;

    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }

    return 0;
}
