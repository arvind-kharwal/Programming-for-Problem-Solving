#include<stdio.h>
int main()
{
    int n,i,count = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==0 || n==1)
        count = 1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("%d is prime number",n);
    else    
        printf("%d is not prime number",n); 
}