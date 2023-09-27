#include<stdio.h>
int main()
{
    int a,b;
    a = 5;
    b = ++a + ++a + ++a;
    printf("%d\t%d",a,b);
    return(0);
}