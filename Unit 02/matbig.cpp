#include<stdio.h>
int main()
{
    int M[3][3],i,j,big;
    printf("\nEnter the elements in Matrix M: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&M[i][j]);
        }
    }
    printf("\nThe Entered elements in Matrix M: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }
    big = M[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(M[i][j]>big)
                big = M[i][j];
        }
        printf("\n");
    }
    printf("\nThe Biggest Element is %d",big);
return(0);
}