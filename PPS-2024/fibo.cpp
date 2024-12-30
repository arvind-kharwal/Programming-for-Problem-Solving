#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    a = 0;
    b = 1;
    printf("\nThe Fibonacci Series: \t%d\t%d",a,b);
    for(i=0;i<n-2;i++)
    {
        c = a + b;
        printf("\t%d",c);
        a = b;
        b = c;
    }
}