#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *s;
    s = (char*)calloc(10,sizeof(char));
    strcpy(s,"Arvind");
    printf("\n%s and %u",s,s);
    s = (char*)realloc(s,25);
    strcat(s,"Kharwal");
    printf("\n%s and %u",s,s);    
}