void main()
{
int i,j,temp = 0;
int list[]={12,14,22,11,39,9,2,44,55,23};
for (i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
if(list[i]<list[j])
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


