#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    printf("Enter the string in Lower Case: ");
    gets(s);
    printf("\nThe String S1 in Lower Case: ");
    puts(s);
    strupr(s); // 
    printf("\nThe String in Uppercase: ");
    puts(s);
}