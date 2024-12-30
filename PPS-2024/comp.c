#include<stdio.h>
#include<math.h>
int main()
{
    double p,t,r,a,ci;
    printf("\nEnter the principal amount, rate and time");
    scanf("%lf%lf%lf",&p,&r,&t);
    a = p*pow((1+r/10),t);
    printf("\nThe Total amount is %lf",a);
    ci = a-p;
    printf("\nThe compound interest is %lf",ci);
    return(0);
}
