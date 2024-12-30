#include<stdio.h>
#include<string.h>
int main()
{
    char s1[40];
    int i=0,l,t;
    printf("Enter the string 1: ");
    gets(s1);
    printf("\nThe string is %s\n",s1);
    l = strlen(s1)-1;
    for(i=0;i<=l/2;i++)
    {
        if(s1[i]!=s1[l-i])
        {
            t = s1[i];
            s1[i] = s1[l-i];
            s1[l-i] = t;
        }
    }
    printf("\nThe string is :\n"); 
    puts(s1);
}