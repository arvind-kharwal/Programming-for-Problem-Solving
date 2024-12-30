#include<stdio.h>
unsigned long int fact(int);
int main()
{
    int n;
    unsigned long int r;
    printf("Enter the number: ");
    scanf("%d",&n);
    r = fact(n);
    printf("\n The answer is %lu",r);
    return(0);
}
unsigned long int fact(int n)
{
    int i;
    unsigned long int f = 1;
    for(i=1;i<=n;i++)
        f = f*i;
    return(f);

}