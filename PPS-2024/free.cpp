#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *s;
    s = (char*)malloc(6);
    strcpy(s,"Hello");
    printf("\nThe string is %s and address is %u",s,s);
    s = (char*)realloc(s,13);
    strcat(s,"World");
    printf("\nThe string is %s and address is %u",s,s);
    free(s);
    printf("\nString is %s",s);
}