#include<stdio.h>
void leap(int);
int main()
{
    int y;
    printf("\nEnter the year: ");
    scanf("%d",&y); //2023
    leap(y);
    return(0);
}
void leap(int x)
{
    if((x%100==0)&&(x%400==0)||(x%100!=0)&&(x%4==0))
        printf("Leap Year");
    else
        printf("Not Leap Year");
}