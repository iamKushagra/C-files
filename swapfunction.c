#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
int x,y;
printf("Enter the first: ");
scanf("%d",&x);
printf("Enter the second ");
scanf(" %d",&y);
printf("before swapping\nx=%d\ny=%d\n",x,y);
swap(&x,&y);
printf("After swapping\nx=%d\ny=%d\n",x,y);
getch();
}
void swap(int*a,int*b)
{
int t;
t=*b;
*b=*a;
*a=t;
}
