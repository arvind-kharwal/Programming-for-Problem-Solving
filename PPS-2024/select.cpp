#include<stdio.h>
int main()
{
    int a[7],i,j,min,loc,t;
    printf("Enter the values: ");
    for(i=0;i<7;i++)
        scanf("%d",&a[i]);
    printf("\nEntered values: ");
    for(i=0;i<7;i++)
        printf(" %d",a[i]);
    for(i=0;i<7;i++)
    {
        min = a[i];
        loc = i;
        for(j=i+1;j<7;j++)
        {
            if(a[j]<min)
            {
                min = a[j];
                loc = j;
            }
        }
        if(loc!=i)
        {
            t = a[i];
            a[i] = a[loc];
            a[loc] = t;
        }
    }
    printf("\nThe Sorted array: ");
    for(i=0;i<7;i++)
        printf(" %d",a[i]);
    
}