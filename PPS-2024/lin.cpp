#include<stdio.h>
int main()
{
    int a[5],i,n,loc=-1;
    printf("\nEnter the elements in array a");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("\nThe elements in array a");
    for(i=0;i<5;i++)
        printf("\t%d",a[i]);
    printf("\nEnter the element to be search: ");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(a[i]==n)
        {
            loc = i;
        }
    }
    if(loc>-1)
        printf("\nThe element %d is at %d position",n,loc+1);
    else
        printf("\nThe element does not exist");
    return 0;
}