#include<stdio.h>
int main()
{
    int base,power,i,res=1;
    printf("Enter the base & exponent");
    scanf("%d%d",&base,&power);
    for(i=1;i<=power;i++)
        res = res*base;
    printf("\nThe power is %d",res);
    return(0);
}

