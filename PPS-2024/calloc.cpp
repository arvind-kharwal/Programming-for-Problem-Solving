#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
    printf("\nEnter the size of an array: ");
    scanf("%d",&n);
    p = (int*)calloc(n,sizeof(int));
    if(p==NULL)
        printf("Memory not avialable");
    else
        {
            for(i=0;i<n;i++)
                printf("%d",*(p+i));
        }

}