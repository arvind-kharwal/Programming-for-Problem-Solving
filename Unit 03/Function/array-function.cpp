#include<stdio.h>
void display(int []);
int main()
{
    int a[5],i;
    printf("\nEnter the elements of the array: ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    display(a);
    return(0);
}
void display(int x[])
{
    int i;
    printf("\nThe elements of the array A:");
    for(i=0;i<5;i++)
        printf("%d",x[i]);
}