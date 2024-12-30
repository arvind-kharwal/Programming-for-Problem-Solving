#include<stdio.h>
int main()
{
    long int n,a,sum=0;
    printf("Enter the 5 digit number: ");
    scanf("%ld",&n);
    a = n%10;
    sum = sum+a;
    n = n/10;

    a = n%10;
    sum = sum+a;
    n = n/10;

    a = n%10;
    sum = sum+a;
    n = n/10;

    a = n%10;
    sum = sum+a;
    n = n/10;

    a = n%10;
    sum = sum+a;
    n = n/10;
    printf("The sum of digits is %ld",sum);
    return(0);
}
