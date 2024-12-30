#include<stdio.h>
int main()
{
    char s1[40],s2[40];
    printf("Enter the string:");
    gets(s1);
    printf("\nthe string S1:");
    puts(s1);
    sprintf(s2,s1);
    printf("\nthe string S2:");
    puts(s2);
}