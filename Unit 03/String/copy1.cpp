#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50];
    int i=0;
    printf("Enter the string S1: ");
    gets(s1);
    printf("\nThe string is S1 is %s ",s1);
    while(s1[i]!='\0')
    {
        s2[i] = s1[i];
        i++;
    }
    printf("\nThe string is S2 is %s",s2);
    return(0);
}