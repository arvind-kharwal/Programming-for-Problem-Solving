#include<stdio.h>
#include<math.h>
int square(int,int);
int main()
{
    int b,p,r;
    printf("Enter the base & power: ");
    scanf("%d%d",&b,&p);
    r = square(b,p);
    printf("\n The square is %d",r);
    return(0);
}
int square (int x,int y)
{
    int i,r=1;
    for(i=1;i<=y;i++)
        r = r*x;
    return(r);

}