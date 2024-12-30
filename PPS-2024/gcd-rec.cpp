#include<stdio.h>
int gcd(int,int);
int main()
{
    int a,b,r;
    printf("\nEnter the numbers: ");
    scanf("%d%d",&a,&b);
    r = gcd(a,b);
    printf("\nThe gcd is %d",r);
}
int gcd(int a,int b)
{
    if(b==0)
        return(a);
    else if(a<b)
        return(gcd(b,a));
    else
        return(gcd(b,a%b));
}