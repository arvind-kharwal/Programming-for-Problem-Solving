#include<stdio.h>
int main()
{
    int a[5],i,n,low,high,mid;
    printf("Enter the number of elements in the array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe elements in the array: ");
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\nThe element to be search: ");
    scanf("%d",&n);
    low=0;
    high=4;
    mid = (low+high)/2;
    while(low<=high)
    {
        if(n==a[mid])
        {
            printf("\nElement found at position %d",mid+1);
            break;
        }
        else if(n<a[mid])
            high = mid-1;
        else if (n>a[mid])
            low = mid+1;

        mid = (low+high)/2;
    }
    if(low>high)
        printf("The element does not exist");
}