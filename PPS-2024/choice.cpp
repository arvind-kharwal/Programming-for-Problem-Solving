#include<stdio.h>
int main()
{
    int n,pos=0,neg=0,zero=0,ch=1;
    while(ch)
    {
        printf("Enter the number:");
        scanf("%d",&n);
        if(n==0)
            zero++;
        if(n>0)
            pos++;
        if(n<0) 
            neg++;
        printf("Do you want to continue? Press 1 for yes or 0 to discontinue:");
        scanf("%d",&ch);
    }
    printf("\n\nYou have entered %d positive, %d negative, and %d zero integers", pos, neg, zero);
}