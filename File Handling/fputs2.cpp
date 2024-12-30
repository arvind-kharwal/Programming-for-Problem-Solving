#include<stdio.h>
int main()
{
    FILE *fp;
    char ch[20];
    fp = fopen("data4.txt","w");
    printf("Enter the string: ");
    gets(ch);
    fputs(ch,fp);
    fclose(fp);
}