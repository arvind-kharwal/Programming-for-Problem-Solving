#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("data.txt","r");
    ch = fgetc(fp);
    printf("%c",ch);
    ch = fgetc(fp);
    printf("%c",ch);
}