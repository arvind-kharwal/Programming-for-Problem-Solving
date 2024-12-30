#include<stdio.h>
float area(int);
int main()
{
    int r;
    float a;
    printf("Enter the radius: ");
    scanf("%d",&r);
    a = area(r);
    printf("\n The area is %f",a);
}
float area(int r)
{
    float a;
    a = 3.14*r*r;
    return(a);
}