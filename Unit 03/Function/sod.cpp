#include<stdio.h>
int sod(long int);
int main()
{
    int r;
    long int n;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    r = sod(n);
    printf("\nThe sum of digit is %d",r);
}
int sod(long int x)
{
    long int s = 0,a;
    while(x>0)
    {
        a = x%10;
        s = s+a;
        x = x/10;
    }
    return(s);
}