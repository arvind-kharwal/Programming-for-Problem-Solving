#include<stdio.h>
int main()
{
    int a[7],i,j,t;
    printf("Enter the values: ");
    for(i=0;i<7;i++)
        scanf("%d",&a[i]);
    printf("\nEntered values: ");
    for(i=0;i<7;i++)
        printf(" %d",a[i]);
    for(i=0;i<7;i++)
    {
        t = a[i];
        j = i-1;
        while(t<a[j]&&j>=0)
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = t;
    }
    printf("\nSotred values: ");
    for(i=0;i<7;i++)
        printf(" %d",a[i]);
    return 0;
}