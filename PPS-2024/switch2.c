#include<stdio.h>
int main()
{
    int n;
    double r,a,b,a1,a2,c;
    printf("1. Area of Circle ");
    printf("\n2. Circumference of Circle ");
    printf("\n3. Area of Square ");
    printf("\n\n\n\t\t\t Enter the choice: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            system("cls");
            printf("\n\n\n\t\t\tArea of Circle ");
            printf("\nEnter the radius");
            scanf("%lf",&r);
            a1 = 3.14*r*r;
            printf("\n The area of circle is %lf",a1);
            break;
        case 2:
            system("cls");
            printf("\n\n\n\t\t\tCircumference of Circle ");
            printf("\nEnter the radius");
            scanf("%lf",&r);
            c = 2*3.14*r;
            printf("\n Circumference is %lf",c);
            break;
        case 3:
            system("cls");
            printf("\n\n\n\t\t\tArea of Square ");
            printf("\nEnter the length & breadth");
            scanf("%lf%lf",&a,&b);
            a2 = a*b;
            printf("\n The area of square is %lf",a2);
            break;
        default:
            printf("\nPlease enter correct choice!");
    }
    return(0);
}

