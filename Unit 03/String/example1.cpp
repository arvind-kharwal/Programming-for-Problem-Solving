#include<stdio.h>
int main()
{
    char s[50] = "Hello Arvind";
    printf("\nThe string is %s: ",s);
    s[1] = 'T';
    printf("\nThe string is %s: ",s);
    return(0);
}