#include<stdio.h>
#include<string.h>
int main()
{
    char s1[40],i=0,l,t=0;
    printf("Enter the string 1: ");
    gets(s1);
    printf("\nThe string is %s\n",s1);
    l = strlen(s1)-1;
    while(s1[i]!='\0')
    {
        if(s1[i]!=s1[l])
        {
            t = 1;
            break;
        }
        i++;
        l--;        
    }
    if(t==0)
        printf("\nPalindrome");
    else
        printf("\nNot Palindrome");
}