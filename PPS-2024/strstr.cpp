#include<stdio.h>
#include<string.h>
int main()
{
    char s[20] = "Hello CSE";
    char s1[20] = "N";
    char *p;
    p = strstr(s,s1);
    printf("%s",p);
    if(p)
        printf("%s",p);
    else
        printf("String not exist");
}