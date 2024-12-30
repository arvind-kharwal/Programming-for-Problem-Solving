#include<stdio.h>
void search(int[],int);
int main()
{
    int r,n,a[5],i;
    printf("Enter the number: ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("\nEntered numbers: ");
    for(i=0;i<5;i++)
        printf("\t%d",a[i]);
    printf("\nEnter the number to be search: ");
    scanf("%d",&n);
    search(a,n);
}
void search(int a[],int n)
{
    int i,loc=-1;
    for(i=0;i<5;i++)
    {
        if(a[i]==n)
        {
            loc = i;
            break;
        }
    }
        if(loc>-1)
            printf("The element %d is found at %d",n,loc+1);
        else
            printf("\nDoes not exist");
}