#include<stdio.h>
#include<conio.h>
void reverse(int*,int*);
void main()
{
int num,result=0;
printf("Enter a number:");
scanf("%d",&num);
reverse(&num,&result);
printf("\n The Reverse of %d is= %d", num,result);
getch();
}
void reverse(int*n,int*res)
{
int rem;
if((*n)>0)
{
rem =(*n) % 10;
(*res)=(*res)* 10+ rem;
(*n) = (*n) / 10;
}
}
