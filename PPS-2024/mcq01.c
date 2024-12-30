#include<stdio.h>
int main()
{
    int a,b,c;
    a = 3;
    b = 4;
    c = b-a;
    switch(c)
    {
        case 1||2:
            printf("3");
            break;
        case a||b:
            printf("\nDefault");
            break;
    }
    return(0);
}
