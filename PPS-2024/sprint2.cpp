#include<stdio.h>
int main()
{
    char s1[40] = "Hello";
    char s2[40];
    printf("\nthe string S1:");
    puts(s1);
    sprintf(s2,"This is string %s",s1);
    printf("\nthe string S2:");
    puts(s2);
}