void main()
{
int i,j,temp = 0,list[10];
printf("enter the elements in the array(only 10 elements)");
for(i=0;i<10;i++)
scanf ("%d",&list[i]);
for (i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
if(list[i]>list[j])
{
temp=list[i];
list[i]=list[j];
list[j]=temp;
}
}
printf("elements of array in ascending order:");
for(i=0;i<10;i++)
{
printf(" %d \t",list[i]);
}
return 0;
}



