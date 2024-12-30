#include<stdio.h>
int main()
{
    int a[5],i,low,mid,high,n=41;
    printf("Enter the values in array a");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("\n The values in array a");
    for(i=0;i<5;i++)
        printf("%d",a[i]);
    low  = 0;
    high = 4;
    mid = (low+high)/2;
    while(low<=high)
    {
        if(n==a[mid])
        {
            printf("\n%d found at location %d", n, mid+1);
            break;
        }
        else if(n>a[mid])
            low = mid+1;
        else
            high = mid-1;
        
        mid = (low+high)/2;
    }
    if(low>high)
        printf("\n%d is Not found!", n);
    
}