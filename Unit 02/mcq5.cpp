#include<stdio.h>
int main()
{
    static int a[] = {0,1,2,3,4};
    int *p[] = {a,a+1,a+2,a+3,a+4};
    int **ptr = p;
    // printf("%d",ptr-p);
    // printf("%d",*ptr-a);
    // printf("%d",**ptr);
    printf("\n%d%d%d",*ptr-a,ptr-p,**ptr);
    printf("\n%u\t%u\t%u",*ptr,ptr,&a);
    ptr++;
    printf("\n%d%d%d",*ptr-a,ptr-p,**ptr);
    ptr++;
    printf("\n%d%d%d",*ptr-a,ptr-p,**ptr);
    return(0);
}