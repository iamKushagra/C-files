#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
    int low,mid,high,n,i;
    int num[10];
    printf("\n Give 10 number in ascending order");
    for(i=0;i<10;i++)
{
    scanf("%d",&num[i]);
}
printf("\n List of Element:");
for (i=0;i<10;i++)
{
    printf("num[%d] = %d \n",i,num[i]);
}
    printf("\n Give Search Value: ");
    scanf("%d",&n);
    low=0;
    high=9;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(n<num[mid])
            high=mid-1;
        else
            if(n>num[mid])
            low=mid+1;
        else
        {
            printf("\n Found at %d ",mid+1);
         exit(0);
        }
    }
    printf("\n %d not found ",n);
    getch();
}
