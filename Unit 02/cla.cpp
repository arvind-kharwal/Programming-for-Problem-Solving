#include<stdio.h>
int main(int argc, const char *argv[])
{
    printf("\n%d",argc);
    for(int i=0;i<argc;i++)
        printf("\n%s",argv[i]);
    return(0);
}