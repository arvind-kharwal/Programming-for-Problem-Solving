#include<stdio.h>
unsigned long int fact(int);
int main()
{
    int n;
    unsigned long int r;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    r = fact(n);
    printf("\nThe Factorial is %lu",r);
    return(0);
}
unsigned long int fact(int m)
{
    unsigned long int f = 1;
    int i;
    for(i=1;i<=m;i++)
        f = f*i;
    return(f);
}