#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    printf("Enter the number:");
    scanf("%d",&n);
    a = n%10;
    b = n/10;
    b = b%10;
    c = n/100;
    if((a*a*a)+(b*b*b)+(c*c*c)==n)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
}