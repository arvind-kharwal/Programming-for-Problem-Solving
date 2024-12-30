#include<stdio.h>
int main()
{
    char s[40];
    int i=0,j,k;
    char t;
    printf("Enter the string: ");
    gets(s);
    //printf("\nThe string is %s\n",s);
    for(i=0;s[i]='\0';i++)
    {   
        j = i;
        for(k=i+1;s[k]!='\0';k++)
        {
            if(s[k]<s[j])
                j = k;
        }
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        printf("%c",s[i]);
    }
    return(0);
}