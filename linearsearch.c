#include<stdio.h>
#include<conio.h>
void main()
{
int list[10],i,ser=0;
printf("Enter the total 10 elements: ");
for(i=0;i<10;i++)
scanf("%d ",&list[i]);
printf("Enter the searching elements: ");
scanf("%d ",&ser);
for(i=0;i<10;i++)
{
if(ser==list[i])
{
printf("elements found at position=%d\t",i+1);
break;
}
}
if(i==10)
{
printf("elements not found ");
}
}
