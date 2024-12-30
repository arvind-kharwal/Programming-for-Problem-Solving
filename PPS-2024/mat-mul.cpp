#include<stdio.h>
// #define m 2
// #define n 3
// #define q 2
// #define p 2
int main()
{
    int m,n,p,q;
    printf("Enter the rows and columns for first Matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the rows and columns for Second Matrix: ");
    scanf("%d%d",&p,&q);
    int a[m][n],b[p][q],c[m][q],i,j,k;
    if(n!=p)
    {
        printf("\nMultiplication is not possible");
    }
    else
    {
        printf("Enter the elements of the matrix a:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nThe Entered elements are: \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("Enter the elements of the matrix b:\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("\nThe Entered elements are: \n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j] = 0;
                for(k=0;k<n;k++)
                {
                    c[i][j] = c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        printf("\nThe Matrix C : \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
}