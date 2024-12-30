#include<stdio.h>
int disp(int[]);
int main()
{
    int a[5],i,r;
    printf("Enter the number: ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("\nEntered numbers: ");
    for(i=0;i<5;i++)
        printf("\t%d",a[i]);
    r= disp(a);
    printf("\n The sum is %d: ",r);
}
int disp(int a[])
{
    int i,sum=0;
    for(i=0;i<5;i++)
        sum = sum+a[i];
    return(sum);
}