#include<stdio.h>
long int reverse(long int);
int main()
{
    long int n,r;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    r = reverse(n);
    printf("\nThe Reverse Number is %ld",r);
}
long int reverse(long int x)
{
    long int s = 0,a;
    while(x>0)
    {
        a = x%10;
        s = s*10+a;
        x = x/10;
    }
    return(s);
}