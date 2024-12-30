#include<stdio.h>
int main()
{
    int pos=0,neg=0,zero=0,ch=1,n;
    while(ch)
    {
        printf("\nEnter the number: ");
        scanf("%d",&n);
        if(n==0)
            zero++;
        if(n<0)
            neg++;
        if(n>0)
            pos++;
        printf("\n Press 1 to continue or 0 to exit: ");
        scanf("%d",&ch);
    }
    printf("\nThe positive numbers are %d",pos);
    printf("\nThe Negitive numbers are %d",neg);
    printf("\nThe zero numbers are %d",zero);
}