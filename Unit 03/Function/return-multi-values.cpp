#include<stdio.h>
void addsub(int,int,int*,int*);
int main()
{
    int add, sub,a,b;
    printf("\nEnter the numbers: ");
    scanf("%d%d",&a,&b);
    addsub(a,b,&add,&sub);
    printf("\nThe addition is %d",add);
    printf("\nThe subtraction is %d",sub);
}
void addsub(int x,int y,int *pa,int *ps)
{
    *pa = x+y;
    *ps = x-y;
}