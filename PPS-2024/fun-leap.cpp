#include<stdio.h>
void leap(int);
int main()
{
    int y;
    printf("Enter the year: ");
    scanf("%d",&y);
    leap(y);
}
void leap(int y)
{
    if((y%100==0)&&(y%400==0)||(y%100!=0)&&(y%4==0))
        printf("Leap Year");
    else
    printf("Not Leap Year");
}