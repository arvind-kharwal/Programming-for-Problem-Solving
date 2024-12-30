#include<stdio.h>
int sum(int []);
int main()
{
    int a[5],i,r;
    printf("Enter the elements:");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    r = sum(a);
    printf("\nThe sum is %d",r);
}
int sum(int a[])
{
    int s=0,i;
    for(i=0;i<5;i++)
        s = s+a[i];
    return(s);
}