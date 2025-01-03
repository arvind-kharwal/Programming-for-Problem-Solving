#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("file.txt","r");
    while(1)
    {
        ch = fgetc(fp);
        if(ch==EOF)
            break;
        else   
            printf("%c",ch);
    }
    fclose(fp);
}