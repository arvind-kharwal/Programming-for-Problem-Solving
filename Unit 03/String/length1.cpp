#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i=0;
    printf("Enter the string: ");
    gets(s);
    printf("\nThe string is %s: ",s);
    while(s[i]!='\0')
    {
        i++;
    }
    printf("\nThe length of the string %d",i);
    return(0);
}