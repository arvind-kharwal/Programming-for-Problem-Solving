#include<stdio.h>
int main()
{
    long int n,a,rev=0;
    printf("Enter the 5 digit number: ");
    scanf("%ld",&n);
    a = n%10;
    rev = rev+a*10000;
    n = n/10;

    a = n%10;
    rev = rev+a*1000;
    n = n/10;

    a = n%10;
    rev = rev+a*100;
    n = n/10;

    a = n%10;
    rev = rev+a*10;
    n = n/10;

    a = n%10;
    rev = rev+a;
    n = n/10;
    printf("The reverse number is %ld",rev);
    return(0);
}
