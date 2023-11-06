#include<stdio.h>
void display(int);
int main()
{
    int r=20;
    display(r);
    return(0);
}
void display(int x)
{
    printf("The value is %d",x);
}