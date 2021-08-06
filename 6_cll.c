#include<stdio.h>
#include<stdlib.h>

typedef struct sll
{
    char data;
    struct sll *link;
}node;

node *first = NULL;
node *last = NULL;

void creat(char ele)
{
    node *ptr = (node*)malloc(sizeof(node));
    ptr->data = ele;
    ptr->link = first;
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
       do
       {
           printf("%c\n",temp->data);
           temp = temp->link;
       }while(temp != first);
    }
}
int main()
{
    display();
    creat('a');
    creat('e');
    display();
    creat('i');
    creat('o');
    creat('u');
    printf("using display function a last\n");
    display();
}


//

empty list
a
e
using display function a last
a
e
i
o
u