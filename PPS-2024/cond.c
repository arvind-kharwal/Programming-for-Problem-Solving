#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    (a<b)?printf("%d is greater",b):printf("%d is smaller",b);
    return(0);
}

