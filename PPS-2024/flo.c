#include<stdio.h>
int main()
{
    int r;
    float a,c;
    printf("Enter the radius: ");
    scanf("%d",&r);
    a = 3.14*r*r;
    c = 2*3.14*r;
    printf("The area is %f",a);
    printf("\nThe circumference is %f",c);
    return(0);
}

