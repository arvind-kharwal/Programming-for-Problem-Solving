#include<stdio.h>
int sum(int,int);
int main()
{
    int a,b,r;
    printf("\nEnter the numbers: ");
    scanf("%d%d",&a,&b);
    r = sum(a,b);
    printf("\n The sum is %d",r);
    return(0);
}
int sum(int x,int y)
{
    int s;
    s=x+y;
    return(s);
}