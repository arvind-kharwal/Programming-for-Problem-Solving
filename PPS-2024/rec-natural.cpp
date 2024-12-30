#include<stdio.h>
int natural(int);
int main()
{
    int r,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    r = natural(n);
    printf("\nThe sum is %d",r);
}
int natural(int n)
{
    if(n==1)
        return(1);
    else
        return(n+natural(n-1));
}