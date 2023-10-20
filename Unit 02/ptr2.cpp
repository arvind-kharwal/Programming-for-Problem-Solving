#include<stdio.h>
int main()
{
    static int a[ ] = {10,20,30,40,50};
    int *p[ ] = {a,a+1,a+2,a+3,a+4};
    int **ptr = p;
    ptr++;
    printf("\n %d %d %d", ptr-p,*ptr-a,**ptr);
}