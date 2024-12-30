#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
    printf("\nEnter the size of an array: ");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    if(p==NULL)
        printf("Memory not avialable");
    else
        {
            printf("\nEnter the Elements: ");
            for(i=0;i<n;i++)
                scanf("%d",p+i);
            printf("\nEntered Elements: ");
            for(i=0;i<n;i++)
                printf("%d\t",*(p+i));
        }

}