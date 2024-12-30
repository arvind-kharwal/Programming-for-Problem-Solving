#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for(j=0;j<i-1;j++)
        printf(" ");
        for(k=5;k>=i;k--)
        {
            printf("%d",k);
        }
        printf("\n");  
    }
    return(0);
}