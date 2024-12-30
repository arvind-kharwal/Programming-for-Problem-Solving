#include<stdio.h>
int main()
{
    int n;
    int a,x ,b;
    double y;
    printf("Enter your Choice: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("\nEnter the values for a,x and b");
            scanf("%d%d%d",&a,&x,&b);
            y  = (a*x)%b;
            printf("\nThe y is %lf",y);
            break;
        case 2:
            printf("\nEnter the values for a,x and b");
            scanf("%d%d%d",&a,&x,&b);
            y  = a*(x*x) + (b*b);
            printf("\nThe y is %lf",y);
            break;
        case 3:
            printf("\nEnter the values for a,x and b");
            scanf("%d%d%d",&a,&x,&b);
            y  = a- b*x;
            printf("\nThe y is %lf",y);
            break;
        case 4:
            printf("\nEnter the values for a,x and b");
            scanf("%d%d%d",&a,&x,&b);
            y  = a+x/b;
            printf("\nThe y is %lf",y);
            break;
        default:
            printf("\nWrong Choice");
    }
    return(0);
}


