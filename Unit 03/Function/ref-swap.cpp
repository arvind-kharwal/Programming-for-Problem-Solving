#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("\nEnter the two numbers: ");
    scanf("%d%d",&a,&b);
    printf("\nThe numbers before swapping are: %d %d",a,b);
    swap(&a,&b);
    return(0);
}
void swap(int *x,int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("\nThe numbers after swapping are: %d %d",*x,*y);
}