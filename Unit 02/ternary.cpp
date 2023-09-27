#include<stdio.h>
int main()
{
    int n,b;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    b = (n<10)?200:300;
    printf("\nThe number is %d: ",b);
return(0);
}