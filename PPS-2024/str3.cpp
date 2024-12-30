#include<stdio.h>
#include<string.h>
int main()
{
    char s1[40],s2[40],i=0,l;
    printf("\nEnter the string 1: ");
    gets(s1);
    printf("\nThe string is %s\n",s1);
    printf("\nEnter the string 2: ");
    gets(s2);
    printf("\nThe string is %s\n",s2);
    l = strlen(s1);
    while(s2[i]!='\0')
    {
        s1[l+i] = s2[i];
        i++;
    }
    s1[l+i] = '\0';
    printf("Concatenated String:");
    puts(s1);
}