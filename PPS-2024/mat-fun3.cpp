#include<stdio.h>
void disp(int[][3]);
int sum(int[][3]);
int main()
{
    int a[3][3],i,j,r;
    printf("Enter the number: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    disp(a);
    r= sum(a);
    printf("\n The sum is %d: ",r);
}
void disp(a[3][3])
{
    int i,j;
    printf("\nMatrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
int sum(int a[3][3])
{
    int i,s=0,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            s = s+a[i][j];
        }
    }
    return(s);
}