#include<stdio.h>
int main()
{
    int i,j,k=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==j)
                printf("%d",j);
            else
                printf("%d",k);
        }
        printf("\n");
    }
    return(0);
}