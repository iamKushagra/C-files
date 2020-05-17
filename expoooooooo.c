#include<stdio.h>
#include<conio.h>
void power(int*,int*,int*);
void main()
{
int b,e,result=0;
printf("Enter the base:- ");
scanf(" %d",&b);
printf("Enter the exponent:-");
scanf(" %d",&e);
power(&b,&e,&result);
printf("Results of Base %d\t & Exponent %d\t is= %d",b,e,result);
getch();
}
void power(int*base,int*expo,int*r)
{
*r = pow(*base,*expo);
}
