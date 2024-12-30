#include <stdio.h>

int main()
{
    float real1, real2, imag1,imag2, realsum,imagsum;
    printf("Enter the real and Image of first");
    scanf("%f%f",&real1,&imag1);
    printf("Enter the real and Image of 2nd");
    scanf("%f%f",&real2,&imag2);
    realsum = real1+real2;
    imagsum = imag1+imag2;
    printf("The sum of complex numbers: %.2f+i%.2f",realsum,imagsum);
    return 0;
}
