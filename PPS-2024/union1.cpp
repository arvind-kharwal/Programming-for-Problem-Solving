#include<stdio.h>
int main()
{
    union Example
    {
        int a;
        float b;
    };
    union Example E;
    E.a = 10;
    E.b = 20.5;
    printf("\n%d",E.a);
    printf("\n%f",E.b);
    printf("\nThe size %d",sizeof(E));
}