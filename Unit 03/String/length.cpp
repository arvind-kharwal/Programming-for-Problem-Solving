#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int len;
    printf("Enter the string: ");
    gets(s);
    printf("\nThe string is %s: ",s);
    len = strlen(s);
    printf("\nThe length of the string %d",len);
    return(0);
}