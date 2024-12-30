#include<stdio.h>
int main()
{
    const char *p = "Hello";
    while(*p!='\0')
    {
        printf("%c",*p);
        p++;
    }
    
}