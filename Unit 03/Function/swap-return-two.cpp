#include<stdio.h>
void swap(int,int,int*,int*);
int main()
{
    int m,n,a,b;
    printf("\nEnter the numbers: ");
    scanf("%d%d",&a,&b);
    printf("\nThe Values before swapping are %d %d",a,b);
    swap(a,b,&m,&n);
    printf("\nThe Values after swapping are %d %d",m,n);
}
void swap(int x,int y,int *pa,int *ps)
{
    *pa = y;
    *ps = x;
}