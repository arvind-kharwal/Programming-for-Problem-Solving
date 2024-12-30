#include<stdio.h>
int main()
{
    long int n,a,revnum = 0;
    printf("\nEnter the 5 digit number: ");
    scanf("%ld",&n);
    while(n!=0)
    {
        a = n%10;
        revnum = revnum*10+a;
        n = n/10;
    }    printf("\nThe sum of digits is %ld",revnum);
    return(0);
}

