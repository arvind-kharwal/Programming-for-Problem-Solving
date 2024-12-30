#include<stdio.h>
int rev(int);
int main()
{
    int r,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    r = rev(n);
    printf("\nThe reverse is %d",r);
    return(0);
}
int rev(int n)
{
    int s,a;
    if (n==0)
        return 0;
    else
        return(n%10)+rev(n/10)*10;
}