#include<stdio.h>
unsigned long int fact(int *);
int main()
{
    int n;
    unsigned long int r;
    printf("Enter the number: ");
    scanf("%d",&n);
    r = fact(&n);
    printf("\nThe factorial is %lu",r);
    return(0);
}
unsigned long int fact(int *p)
{
    int i;
    unsigned long int f = 1;
    for(i=1;i<=(*p);i++)
        f = f*i;
    return(f);
}
