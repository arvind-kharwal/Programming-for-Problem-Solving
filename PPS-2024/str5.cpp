#include<stdio.h>
#include<string.h>
int main()
{
    char s1[40],t;
    int l,i=0;
    gets(s1);
    l = strlen(s1)-1;
    for(i=0;i<l;i++)
    {
        t = s1[i];
        s1[i]= s1[l];
        s1[l]  = t;
        l--;
    }
    puts(s1);
}