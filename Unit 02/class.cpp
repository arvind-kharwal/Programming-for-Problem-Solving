#include<stdio.h>
int main()
{
    int a[5],b[5],i;
    printf("\nEnter the elements in array a: ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("\nThe elements in array a: ");
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
    for(i=0;i<5;i++)
        b[i] =a[4-i];
    printf("\nThe elements in array b: ");
    for(i=0;i<5;i++)
        printf("%d\t",b[i]);
    return(0);
}