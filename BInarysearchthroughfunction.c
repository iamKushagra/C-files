#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 10
void bsearch(int[],int);
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
    bsearch(num,n);
}
void bsearch(int num1[],int n1)
{
    int low,mid,high;
    low=0; high=max-1;
    while(low<=high)
    {

        mid=(low+high)/2;
        if(n1<num1[mid])
            high=mid-1;
        else
            if(n1>num1[mid])
            low=mid+1;
        else
        {

            printf("\n found at %d",mid+1);
            exit(0);
        }
    }
printf(" \n %d Not Found:-",n1);
getch();
}

