#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch[20];
    int i=0;
    fp = fopen("data2.txt","r+");
    if(fp==NULL)
    {
        printf("File does not exist");
        exit(1);
    }
    printf("\nEnter the string");
    gets(ch);
    while(ch[i]!='\0')
    {
        fputc(ch[i],fp);
        i++;
    }
    fclose(fp);
}