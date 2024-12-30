#include<stdio.h>
int fact(int);
int main()
{
    int n,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    r = fact(n);
    printf("\nThe factorial is %d",r);
}
int fact(int n)
{
    int f;
    if(n==1|| n==0)
        return 1;
    else
        f = n*fact(n-1);
    return(f);
}