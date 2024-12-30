#include<stdio.h>
int main()
{
    FILE *fp;
    char ch[20];
    fp = fopen("data.txt","r");
    fgets(ch,3,fp);
    printf("%s",ch);
    fclose(fp);
}