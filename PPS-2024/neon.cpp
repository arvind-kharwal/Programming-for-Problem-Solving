#include<stdio.h>
int main()
{
    int n,a,sum=0,s,num;    
    printf("\n Enter the number: ");
    scanf("%d",&n);
    num = n;
    while(n!=0)
    {
        a = n%10;
        sum = sum+a;
        n = n/10;
    }
    if(sum==num*num)
        printf("Neon");
    else    
        printf("Not Neon");
}