#include<stdio.h>
int main()
{
    int M[3][3],i,j,t;
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
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            t = M[i][j];
            M[i][j] = M[j][i];
            M[j][i] = t;
        }
    }
    printf("\nThe Transpose of Matrix M: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }
return(0);
}