#include<stdio.h>
int natural(int);
int main()
{
    int n,r;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    r = natural(n);
    printf("\nThe sum of natural numbers is %d",r);
    return(0);
}
int natural(int m)
{
    if(m==1)
        return(1);
    else
        return(m+natural(m-1));
}