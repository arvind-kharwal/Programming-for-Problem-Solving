#include<stdio.h>
int main()
{
    FILE *fp;
    char ch[20];
    fp = fopen("data3.txt","w");
    // printf("Enter the string: ");
    // gets(ch);
    fputs("Hello Arvind, I am using fputs",fp);
    fclose(fp);
}