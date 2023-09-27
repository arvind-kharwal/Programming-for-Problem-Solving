#include<stdio.h>
int main()
{
    int n=10;
    if(n<5)
        goto next;
    next:
        printf("Hello");
}
