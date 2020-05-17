#include<stdio.h>
#include<conio.h>
void SimpleInterest(int*,int*,int*);
void main()
{
int p,r,t;
printf(" Enter the Principal:-");
scanf("%d ",&p);
printf(" Enter the Rate:-");
scanf("%d ",&r);
printf(" Enter the Time:-");
scanf("%d ",&t);
SimpleInterest(&p,&r,&t);
getch();
}
void SimpleInterest(int*pr,int*ra,int*ti)
{
int si;
si=(*pr)*(*ra)*(*ti)/100;
printf("Simple Interest is =%d",si);
}
