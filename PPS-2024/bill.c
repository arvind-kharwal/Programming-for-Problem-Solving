/* Write a program in C language to calculate energy bill. Read the starting and ending meter readings. The charges are as follows: -

No. of Units 				Consumed Rates in Rs.
0<units<=200				Rs. 5.50 Per Unit
200<units<=400 				Rs. 700 + Rs. 6.0 per unit excess of 200
400<units<=600 				Rs. 1400 + Rs. 7.50 per unit excess of 400
600<units<=800				Rs. 1850 + Rs. 9.00 per unit excess of 600
*/
#include<stdio.h>
int main()
{
    double charges;
    int units;
    printf("Enter the units: ");
    scanf("%d",&units);
    if(units>0 && units<=200)
    {
        charges = units*5.50;
        printf("The charges will be %f",charges);
    }
    else if(units>200 && units<=400)
    {
        charges = 700 + (units-200)*6.0;
        printf("The charges will be %f",charges);
    }
   else if(units>400 && units<=600)
   {
        charges = 1400 + (units-400)*7.50;
        printf("The charges will be %f",charges);
   }
   else if(units>600 && units<=800)
   {
        charges = 1850 + (units-600)*9.0;
        printf("The charges will be %f",charges);
   }
   else
        printf("Please enter correct units");

    return(0);
}
