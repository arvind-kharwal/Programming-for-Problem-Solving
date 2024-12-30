#include<stdio.h>
int main()
{
    int a[2][3],i,j;
    printf("\nThe values are: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n%d",a[i][j]);
        }
        //printf("\n");
    }
}