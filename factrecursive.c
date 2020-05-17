#include<stdio.h>
#include<conio.h>
int fact(int num);
void main()
{
int num;
printf("\n Enter The Number for Factorial:\n");
scanf("%d",&num);
printf("\n The Factorial of %d is= %d\n",num,fact(num));
getch();
}
int fact(int num)
{
if(num>=1)
return num*fact(num-1);
else
return 1;
}
