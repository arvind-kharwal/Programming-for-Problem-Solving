#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j)
                printf("%d",k++);
            else    
                printf("0");
        }
        printf("\n");
    }
    return(0);
}