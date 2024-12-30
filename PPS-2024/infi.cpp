#include<stdio.h>
int main()
{
    int i,n,pos=0,neg=0,zero=0,ch=1;
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
        printf("\nPress 1 to continue or 0 to exit: ");
        scanf("%d",&ch);
    }
    printf("Positive = %d\nNegative = %d\nZeros= %d",pos,neg,zero);
}