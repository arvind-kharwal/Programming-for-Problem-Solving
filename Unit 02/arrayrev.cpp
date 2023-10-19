#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},i,t,j;
    for(i=0,j=9;i<j;i++,j--)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    printf("\nThe elements in array a: ");
    for(i=0;i<10;i++)
        printf("%d",a[i]);
    return(0);
}