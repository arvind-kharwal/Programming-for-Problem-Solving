#include<stdio.h>
int main()
{
    int bs;
    float da,hra,gs;
    printf("Enter the basic Salary: ");
    scanf("%d",&bs);
    da = 0.40*bs;
    hra = 0.20*bs;
    gs = bs+da+hra;
    printf("The DA is %.2f",da);
    printf("\nThe HRA is %.2f",hra);
    printf("\nThe gross salary is %.2f",gs);

    return(0);
}


