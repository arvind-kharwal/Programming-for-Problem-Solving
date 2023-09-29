#include <stdio.h>
int main()
{
    int ref_year = 1900, year, diff, leap = 0, total_days = 0, days = 0;
    printf("\nEnter the year: ");
    scanf("%d", &year);
    diff = year - ref_year;
    while (ref_year < year)
    {
        if ((ref_year % 100 == 0) && (ref_year % 400 == 0) || (ref_year % 100 != 0) && (ref_year % 4 == 0))
        {
            leap++;
        }
        ref_year++;
    }

    total_days = (leap * 366) + (diff - leap) * 365;
    days = total_days % 7;
    switch (days)
    {
    case 0:
        printf("Monday");
        break;
    case 1:
        printf("Tuesday");
        break;
    case 2:
        printf("Wednesday");
        break;
    case 3:
        printf("Thursday");
        break;
    case 4:
        printf("Friday");
        break;
    case 5:
        printf("Saturday");
        break;
    case 6:
        printf("Sunday");
        break;
    }
}