#include<stdio.h>
#include<conio.h>
void carea(int);
void main()
{
int a;
printf(" Enter the radius of Circle:- ");
scanf("%d",&a);
carea(a);
getch();
}
void carea(int r)
{
    int area=0;
area=3.14*r*r;
printf("Area of Circle is =%d",area);
}
