#include<stdio.h>
int main(int argc,const char *argv[])
{
    int i;
    printf("\nEntered arguments %d\n",argc);
    for(i=0;i<argc;i++)
    {
        printf("%s",argv[i]);
    }
    
}