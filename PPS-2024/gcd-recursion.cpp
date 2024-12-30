#include<stdio.h>
int gcd(int,int);
int main()
{
    int n1,n2,i,r;
    printf("Enter the numbers: ");
    scanf("%d%d",&n1,&n2);
    r = gcd(n1,n2);
    printf("\nThe gcd is %d",r);
}
int gcd(int a,int b)
{
    if(b==0)
        return(a);
    if(a<b)
        return(gcd(b,a));
    else
        return(gcd(b,a%b));

}