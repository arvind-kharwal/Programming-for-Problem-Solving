#include<stdio.h>
int main( ) 
{ 
    int j,*p;
    p = &j; 
    *p = 35;
    printf("%d",j);
}
