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
    if(m==1)
        return(1);
    else
        return(m*fact(m-1));
}