#include<stdio.h>
int sod(int);
int main()
{
    int r,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    r =sod(n);
    printf("\nThe sum is %d",r);
}
int a,rev=0;
int sod(int n)
{
    if(n)
    {
        a = n%10;
        rev = rev*10+a;
        sod(n/10);
    }
    return(rev);
}