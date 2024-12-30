#include<stdio.h>
int search(int[]);
int main()
{
    int r,a[5],i;
    printf("Enter the number: ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("\nEntered numbers: ");
    for(i=0;i<5;i++)
        printf("\t%d",a[i]);
    r = search(a);
    printf("\nThe biggest element is %d",r);

}
int search(int a[])
{
    int big,i;
    big = a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>big)
        {
            big = a[i];
        }
    }
    return(big);
}