#include<stdio.h>
int main()
{
    int a[] = {10,20,30,45,67,56,74};
    int i,*j;
    j = &a[0];
    for(i=0;i<7;i++)
    {
        printf("%d\t",*j);
        j++;
    }

}