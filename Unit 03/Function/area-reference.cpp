#include<stdio.h>
float area(int *);
int main()
{
    float a;
    int r;
    printf("Enter the radius: ");
    scanf("%d",&r);
    a = area(&r);
    printf("\nThe area is: %f",a);
}
float area(int *r1)
{
    float a1;
    a1 = 3.14*(*r1)*(*r1);
    return(a1);
}
