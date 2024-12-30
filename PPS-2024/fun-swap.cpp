#include<stdio.h>
void swap(int,int);
int main()
{
    int a,b;
    printf("Enter the numbers: ");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("\nThe numbers after swapping are: %d\t%d",a,b);
}
void swap(int x,int y)
{
    int t;
    t = x;
    x = y;
    y = t;
    printf("\nThe numbers after swapping are: %d\t%d",x,y);
}