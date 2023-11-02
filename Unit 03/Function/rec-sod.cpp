#include<stdio.h>
int sod(long int);
int main()
{
    int r;
    long int n;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    r = sod(n);
    printf("\nThe sum of digit is %d",r);
}
int sod(long int x)
{
    if(x==0)
        return(0);
    else
        return((x%10)+sod(x/10));
}