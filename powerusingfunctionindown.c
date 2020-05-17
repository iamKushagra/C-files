#include<stdio.h>
#include<conio.h>
void power(int*,int*);
void main()
{
int b,e;
printf("Enter the base:- ");
scanf(" %d",&b);
printf("Enter the exponent:-");
scanf(" %d",&e);
power(&b,&e);
getch();
}
void power(int*base,int*expo)
{
int i,res=1;
for(i=1;i<=(*expo);i++)
{
res= res*(*base);
}
printf("Results of Base %d & Exponent %d\t is = %d",*base,*expo,res);
}
