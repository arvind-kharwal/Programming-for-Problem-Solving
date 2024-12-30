#include<stdio.h>
int main()
{
    int i,j;
    for(i=101;i>=97;i--)
    {
        for(j=97;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
        
    }
    return(0);
}