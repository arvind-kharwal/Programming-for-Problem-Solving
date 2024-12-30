#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *s;
    char s1[20];
    s = (char*)calloc(10,sizeof(char));
    printf("\nEnter the string: ");
    gets(s);
    printf("\n%s and %u",s,s);
    s = (char*)realloc(s,25);
    printf("\nEnter the second string: ");
    gets(s1);
    strcat(s,s1);
    printf("\n%s and %u",s,s);    
}