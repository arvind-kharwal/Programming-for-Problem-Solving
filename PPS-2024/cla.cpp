#include<stdio.h>
int main(int argc,char *argv[])
{
    int i;
    printf("\nThe numnber of arguments %d",argc);
    for(i=0;i<argc;i++)
        printf("\n%s",argv[i]);
}