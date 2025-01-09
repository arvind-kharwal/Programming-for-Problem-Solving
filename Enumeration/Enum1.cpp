#include<stdio.h>
enum Data
{
    a,
    b,
    c
};
int main()
{
    Data D;
    D = a;
    D = b;
    printf("%d\n", D);
}