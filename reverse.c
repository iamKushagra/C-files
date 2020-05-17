#include<stdio.h>
#include<conio.h>
void reverse(int*);
void main()
{
int num;
printf("Enter a number:\t");
scanf("%d",&num);
reverse(&num);
getch();
}
void reverse(int*n)
{
int rev=0, rem,m=(*n);1
while ((*n)>0)
{
rem = (*n) % 10;
rev = rev * 10+ rem;
(*n) = (*n) / 10;
}
printf("\n The Reverse of %d is= %d",m,rev);
}
