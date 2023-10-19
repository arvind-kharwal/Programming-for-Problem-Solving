#include<stdio.h>
int main( )
{ 
    float a[] = { 13.24, 1.5, 1.6, 5.4, 3.5 } ;
    float *j ; 
    j = a ; 
    j = j + 3 ;
    printf ( "\n%u %f %f", j, *j, a[4] );
}