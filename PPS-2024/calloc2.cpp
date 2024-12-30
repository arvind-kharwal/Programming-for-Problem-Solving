#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i,s=0;
    printf("\nEnter the size of an array: ");
    scanf("%d",&n);
    p = (int*)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("Memory not avialable");
        exit(1);
    }
        
    printf("\nEnter the Elements: ");
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    printf("\nEntered Elements: ");
    for(i=0;i<n;i++)
        printf("%d\t",*(p+i));
    for(i=0;i<n;i++)
        s = s+ *(p+i);
    printf("\nThe sum is %d\t",s);
}