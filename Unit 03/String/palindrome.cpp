#include <stdio.h>
#include <string.h>
int main()
{
    char a[50], b[50];
    printf("Enter the string: ");
    gets(a);
    printf("The string a is: ");
    puts(a);
    strcpy(b, a);
    printf("The string b is: %s", b);
    strrev(b);
    printf("\nThe reverse of string b is: %s", b);
    if (strcmp(a, b) == 0)
        printf("\nString is Palindrome");
    else
        printf("\nString is not Palindrome");
    return (0);
}