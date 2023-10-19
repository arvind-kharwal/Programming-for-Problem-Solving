#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],s[3][3],i,j;
    printf("\nEnter the elements in Matrix a: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe Entered elements in Matrix a: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the elements in Matrix b: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nThe Entered elements in Matrix b: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            s[i][j] = a[i][j]+b[i][j];
        }
    }
    printf("\nThe elements in Matrix s: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }

return(0);
}