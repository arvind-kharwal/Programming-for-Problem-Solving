#include<stdio.h>
long int reverse(long int);
int main()
{
    long int n,r;
    printf("\nEnter the number: ");
    scanf("%ld",&n);
    r = reverse(n);
    printf("\nThe reverse number is %ld",r);
}
long int revnum = 0,a;
long int reverse(long int x)
{

    if(x == 0)
        return(0);
    else
    {
        revnum = (revnum*10)+x%10;
        reverse(x/10);
    }
    return(revnum);
}