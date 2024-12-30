#include<stdio.h>
int main()
{
    int a = 10;
    double b = 3.4;
    void *p;
    p = &a;
    printf("%d\n",*(int*)p);
    p = &b;
    printf("%lf",*(double*)p);
}