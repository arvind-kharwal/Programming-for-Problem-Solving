#include<stdio.h>
#include<math.h>
// s*(s-a)*(s-b)*(s-c)
int main()
{
    int a,b,c,s;
    double area;
    printf("Enter the sides :");
    scanf("%d%d%d",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt((s*(s-a)*(s-b)*(s-c)));
    printf("The area of Triangle %lf",area);
     return(0);
}
