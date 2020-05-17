#include<stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *start = NULL;
struct node* createNode()
{
   struct node *n;
   n = (struct node *)malloc(sizeof(struct node));
   return(n);
}
void insertNode()
{
    struct node *temp, *t;
    temp = createNode();
    printf("Enter the number: ");
    scanf("%d", &temp->info);
    temp->link=NULL;
    if(start==NULL)
    start=temp;
    else{
        t=start;
        while(t->link!=NULL)
            t=t->link;
        t->link=temp;
    }
}
void deleteNode()
{
    struct node *r;
    if(start==NULL)
 printf("List is empty");
    else{
        r=start;
        start=start->link;
        free(r);
    }
}
void view()
{
    struct node *t;
    if(start==NULL)
        printf("List is empty");
    else{
        t = start;
        while(t!=NULL)
        {
            printf("%d \t", t->info);
            t=t->link;
        }
    }
}


int menu()
{
    int ch;
    printf("\n 1. Add value to the list");
    printf("\n 2. Select first value");
    printf("\n 3. View List");
    printf("\n 4. for Exit");
    printf("\n Enter your choice: ");
    scanf("%d", &ch);
    return(ch);
}


void main()
{
 while(1)
  {
    switch(menu())
    {
case 1:
    insertNode();
    break;
case 2:
    deleteNode();
    break;
case 3:
    view();
        break;
case 4:
    exit(0);
default:
    printf("Invalid choice");
    }
    getch();
}
}
