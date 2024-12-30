#include<stdio.h>
int sod(int);
int main()
{
    int n,r;
    printf("Enter the number: ");
    scanf("%d",&n);
    r = sod(n);
    printf("\n The sod is %d",r);
    return(0);
}
int sod (int n)
{
    int a,sum=0;
    while(n!=0)
    {
        a = n%10;
        sum = sum+a;
        n = n/10;
    }
    return(sum);

}