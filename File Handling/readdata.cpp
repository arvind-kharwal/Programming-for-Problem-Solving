#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int noc,nol,nos;
    noc = nol = nos =0;
    fp = fopen("file1.txt","r");
    while(1)
    {
        ch = fgetc(fp);
        if(ch==EOF)
            break;
        noc++;
        if(ch==' ')
            nos++;
        if(ch=='\n')
            nol++;
    }
    printf("\n%d\n%d\n%d",noc,nol,nos);
    fclose(fp);
}