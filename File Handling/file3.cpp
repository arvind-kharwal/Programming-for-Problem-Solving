#include<stdio.h>
int main()
{
    FILE *fp;
    char ch[20];
    fp = fopen("file.txt","r");
    fgets(ch,4,fp);
    printf("%s",ch);
    fclose(fp);
}