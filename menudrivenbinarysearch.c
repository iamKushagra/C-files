#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 10
void input(int[]);
void display(int[]);
void bsearch(int [],int);
void main()
{
    int n;
    int num[max];
    input(num);
    display(num);
    printf("\n Enter Element to search:-");
    scanf("%d",&n);
    bsearch(num,n);
}
        void input(int num1[])
        {
            int i;
            printf("\n Give %d Number in Ascending Order:-",max);
            for(i=0;i<max;i++)
            {
            scanf("%d",&num1[i]);
            }
        }
void display(int num1[])
{
    int j;
    for (j=0;j<max;j++)
    {
        printf("num1[%d] =%d \n",j,num1[j]);
    }
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
