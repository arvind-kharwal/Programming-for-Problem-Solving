#include<stdio.h>
int main()
{
    float q,p,cost;
    printf("\nEnter the  quantity and price per item");
    scanf("%f%f",&q,&p);
    cost = q * p;
    if(q>1000)
    {
        cost = cost - cost*0.10;
    }
    printf("The cost is %f",cost);
}