#include<stdio.h>
#include<conio.h>
void swap(char* a, char* b)
{
    char t;
    t = *a;
    *a = *b;
    *b = t;
}
void permutation(char* s, int i, int n)
{
    static int count; int j;
    if(i==n)
    {
      count ++;
      printf(" %d %s \n", count, s);
    }
    else
        for(j=i; j<=n; j++)
        {

            swap((s+i),(s+j));
            permutation(s, i+1, n);
            swap((s+i),(s+j)); //bactracing
        }
}
int main()
{
    char s[] = "ABC";
    int n = strlen(s);
    permutation(s, 0, n-1);
    return 0;
}
