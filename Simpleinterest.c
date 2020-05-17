#include<stdio.h>
#include<conio.h>
void SimpleInterest(int*,int*,int*);
void main()
{
int p,r,t;
printf(" Enter the principal , Rate & Time: ");
scanf("%d %d %d",&p,&r,&t);
SimpleInterest(&p,&r,&t);
getch();
}
void SimpleInterest(int*pr,int*ra,int*ti)
{
float si;
si=(*pr)*(*ra)*(*ti)*0.01;
printf("Simple Interest is =%f",si);
}
