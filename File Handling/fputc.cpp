#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("data1.txt","w");
    fputc('a',fp);
    fclose(fp);
}