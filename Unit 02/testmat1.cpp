#include<stdio.h>
int main()
{
    int num[26],t;
    num[0] = 100;
    num[25] = 200;
    t = num[25];
    num[25] = num[0];
    num[0] = t;
    printf("%d%d",num[0],num[25]);
    return(0);
}