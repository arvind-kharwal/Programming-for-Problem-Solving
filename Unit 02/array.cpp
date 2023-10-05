#include<stdio.h>
int main()
{
    int a[5],i;
    printf("\nEnter the elements in array a: ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("\nThe elements in array a: ");
    for(i=0;i<5;i++)
        printf("%d",a[i]);
    return(0);
}