#include<stdio.h>
#include<string.h>
int main()
{
    char s[40],i=0,v=0,c=0;
    printf("Enter the string 1: ");
    gets(s);
    printf("\nThe string is %s\n",s);
    while(s[i]!='\0')
    {
        if((s[i]>='A')&&(s[i]<'Z')||(s[i]>='a')&&(s[i]<'z'))
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                v++;
            else
                c++;
        }
        i++;
    }
    printf("\nVowels: %d\nConsonants: %d",v,c);
}