#include<stdio.h>
#include<string.h>
int main()
{
    char s[40],noa=0,noe=0,i=0,noo=0,nou=0,noi=0;
    printf("Enter the string 1: ");
    gets(s);
    printf("\nThe string is %s\n",s);
    while(s[i]!='\0')
    {
        if((s[i]>='A')&&(s[i]<'Z')||(s[i]>='a')&&(s[i]<'z'))
        {
            if(s[i]=='a'||s[i]=='A')
                noa++;
            else if(s[i]=='e'||s[i]=='E')
                noe++;
            else if(s[i]=='i'||s[i]=='I')
                noi++;
            else if(s[i]=='o'||s[i]=='O')
                noo++;
            else if(s[i]=='u'||s[i]=='U')  
                nou++; 
        }
        i++;
    }
    printf("\na: %d\ne: %d\ni: %d\no: %d\nu: %d",noa,noe,noi,noo,nou);
}