#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1 = fopen("file1.txt","r");
    if(fp1==NULL)
    {
        printf("Cannot Open source file");
        exit(1);
    }
    fp2 = fopen("file2.txt","w");
    if(fp2==NULL)
    {
        printf("Cannot Open target file");
        exit(1);
    }
    while(1)
    {
        ch = fgetc(fp1);
        if(ch==EOF)
            break;
        else
            fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
}