#include<stdio.h>
int main( )
{
    double x = 1.1 ;
    while ( x == 1.1 )
    {
        printf ( "\n%lf", x ) ;
        x = x - 0.1 ;
}
    return(0);
}