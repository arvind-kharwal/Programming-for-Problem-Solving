#include<stdio.h>
int main( )
{ 
    int a[26], i;
    for( i = 0 ; i <= 25 ; i++)
    { 
        a[i] = 'A' + i ;
        printf ( "\n%d:%c", a[i],a[i] );
    } 
}