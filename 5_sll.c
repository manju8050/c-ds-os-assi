5)Create a list with 3 nodes having int data in single Linked list data : 100,200,300

#include<stdio.h>
#include<stdlib.h>

typedef struct sll
{
    int data;
    struct sll *link;
}node;

node *first = NULL;
node *last = NULL;

void creat(int ele)
{
    node *ptr = (node*)malloc(sizeof(node));
    ptr->data = ele;
    ptr->link = NULL;
    if(first==NULL)
    {
        first = ptr;
        last = ptr;
    }
    else
    {
        last->link = ptr;
        last = ptr;
    }
}

void display()
{
    if(first == NULL)
    {
        printf("empty list\n");
    }
    else
    {
       node *temp = first;
       while(temp != NULL)
       {
           printf("%d\n",temp->data);
           temp = temp->link;
       } 
    }
}
int main()
{
    display();
    creat(100);
    creat(200);
    creat(300);
    display();
}




//

empty list
100
200
300
