#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 10
void Lsearch(int*[],int*);
void main ()
{
int n,i;
int num[max];
printf("\n Give %d Number in Ascending order:",max);
for(i=0;i<max;i++)
{
    scanf("%d",&num[i]);
}
for(i=0;i<max;i++)
{
    printf("\n num[%d] =%d \n",i,num[i]);
}
{
    printf("\n Enter Element to search:");
    scanf("%d",&n);
}
    Lsearch(&num,&n);
}
void Lsearch(int *num1[],int *n1)
{
    int j;
    for(j =0;j<max;j++)
    {
        if(num1[j]==(*n1))
        {
            printf("\n The Number %d found at position = %d ",*n1,j+1);
            exit(0);
        }
    }
    printf("\nThe Number %d is not found",*n1);
    getch();
}
