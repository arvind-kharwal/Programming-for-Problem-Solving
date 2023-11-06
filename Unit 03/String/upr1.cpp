#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i=0;
    printf("Enter the string in Lower Case: ");
    gets(s);
    printf("\nThe String S in Lower Case: ");
    puts(s);
    while(s[i]!='\0')
    {
        if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=126))
            s[i] = s[i]-32;
        i++;
    }
    printf("\nThe String in Uppercase: ");
    puts(s);
}