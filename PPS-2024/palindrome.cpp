#include<stdio.h>
#include<string.h>
int main()
{
    char s1[40];
    int i=0,l,t=0;
    printf("Enter the string 1: ");
    gets(s1);
    printf("\nThe string is %s\n",s1);
    l = strlen(s1)-1;
    for(i=0;i<=l/2;i++)
    {
        if(s1[i]!=s1[l-i])
        {
            t = 1;
            break;
        }
    }
    if(t==0)
        printf("\nPalindrome");
    else
        printf("\nNot Palindrome"); 
}