#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,disc,root1,root2,real, image;
    printf("Enter the coefficients of quadratic equation: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    disc = b*b - 4*a*c;
    printf("\nDiscriminant %.2lf",disc);
    if(disc>=0)
    {
        root1 = (-b + sqrt(disc))/2*a;
        root2 = (-b - sqrt(disc))/2*a;
        printf("\nRoot1 %.2lf and Root2 %.2lf",root1,root2);
    }
    else if(disc==0)
    {
        root1 = root2 = -b/(2*a);
        printf("\nRoot1 %.2lf and Root2 %.2lf",root1,root2);
    }
    else
    {
        real = -b/(2*a);
        image = sqrt(-disc)/(2*a);
        printf("\nroot1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", real,image,real,image);

    }
    return(0);
}
