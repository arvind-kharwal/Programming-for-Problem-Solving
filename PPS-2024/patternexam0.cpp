#include<stdio.h>
int main() {
    int i,j,k;

    // Upper part of the pattern
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < i; j++) 
            printf(" ");
        for (k = 0; k < 5 - i; k++) 
            printf("*");
        printf("\n");
    }
    // Lower part of the pattern
    for (i = 1; i < 5; i++) 
    {
        for (j = 0; j < 5 - i - 1; j++) 
            printf(" ");
        for (k = 0; k <=i; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
