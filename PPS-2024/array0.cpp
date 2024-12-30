#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter the values in array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe values in array");
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
    return(0);
}