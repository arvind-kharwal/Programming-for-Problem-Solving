#include<stdio.h>
int main()
{
    FILE *fp;
    int noc,nol,nott,nos;
    noc = nol = nott = nos = 0;
    char ch;
    fp = fopen("temp.txt","r");
    while(1)
    {
        ch = fgetc(fp);
        if(ch==EOF)
            break;
        noc++;
        if(ch == '\n')
            nol++;
        if(ch=='\t')
            nott++;
        if(ch==' ')
            nos++;
    }
    if(noc>0)
        printf("%d%d%d%d",nott,nos,nol+1,noc);
    fclose(fp);
}