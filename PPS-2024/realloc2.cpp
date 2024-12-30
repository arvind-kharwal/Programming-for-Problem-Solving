#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*p,m;
    printf("Enter the size: ");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("\nMemory not avialable");
        exit(1);
    }
    printf("\nThe address of block %u",p);
    printf("\nEnter the value:");
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    printf("\nThe values are:");
    for(i=0;i<n;i++)
        printf("%d\t",*(p+i));
    printf("\nEnter the new size: ");
    scanf("%d",&m);
    p = (int*)realloc(p,m*sizeof(int));
    if(p==NULL)
    {
        printf("\nMemory not avialable");
        exit(1);
    }
    printf("\nThe address of block: %u",p);
    printf("\nEnter more values:");
    for(i=n;i<m;i++)
        scanf("%d",p+i);
    printf("\nThe values are:");
    for(i=0;i<m;i++)
        printf("%d\t",*(p+i));
}