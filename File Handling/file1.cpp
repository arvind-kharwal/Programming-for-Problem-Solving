#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("file.txt","r");
    ch = fgetc(fp);
    printf("%c",ch);
    ch = fgetc(fp);
    printf("%c",ch);
    ch = fgetc(fp);
    printf("%c",ch);
}