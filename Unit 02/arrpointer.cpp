#include<stdio.h>
int main( ) 
{ 
    int *arr[4] ; /* array of integer pointers */
    int a = 31, b = 5, c = 19, d = 71, i ;
    arr[0] = &a ; 
    arr[1] = &b ; 
    arr[2] = &c ;
    arr[3] = &d ;
    for ( i = 0 ; i <4 ; i++ ) 
      printf ( "%d ", *(arr[i] ) ); 
}