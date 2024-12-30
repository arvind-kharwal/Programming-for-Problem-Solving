#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,a,ci;
    printf("\nEnter the principal amount rate & time: ");
    scanf("%lf%lf%lf",&p,&r,&t);
    a = p*pow((1+r/100),t);
    ci = a-p;
    printf("\nThe compund interest is %.2lf",ci);
    return(0);
}
