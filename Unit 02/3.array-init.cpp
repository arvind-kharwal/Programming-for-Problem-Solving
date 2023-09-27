#include<stdio.h>
int main()
{
    int a[5];
    int i;
    printf("\nEnter the elements in array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe elements of array a: ");
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}