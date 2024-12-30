#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*p,m=4;
    // printf("Enter the size: ");
    // scanf("%d",&n);
    p = (int*)malloc(2*sizeof(int));
    if(p==NULL)
    {
        printf("\nMemory not avialable");
        exit(1);
    }
    printf("\nEnter the value:");
    for(i=0;i<2;i++)
        scanf("%d",p+i);
    printf("\nThe values are:");
    for(i=0;i<2;i++)
        printf("%d\t",*(p+i));
    p = (int*)realloc(p,4*sizeof(int));
    if(p==NULL)
    {
        printf("\nMemory not avialable");
        exit(1);
    }
    printf("\nEnter more values:");
    for(i=2;i<4;i++)
        scanf("%d",p+i);
    printf("\nThe values are:");
    for(i=0;i<4;i++)
        printf("%d\t",*(p+i));
}