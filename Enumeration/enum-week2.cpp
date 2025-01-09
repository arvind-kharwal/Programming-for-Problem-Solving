#include<stdio.h>
enum Data
{
    Monday=2,
    Tuesday,
    Wednesday=6,
    Thursday,
    Friday,
    Saturday=67,
    Sunday
};
int main()
{
    printf("Monday: %d\n", Monday);
    printf("Tuesday: %d\n", Tuesday);
    printf("Wednesday: %d\n", Wednesday);
    printf("Thursday: %d\n", Thursday);
    printf("Friday: %d\n", Friday);
    printf("Saturday: %d\n", Saturday);
    printf("Sunday: %d\n", Sunday);
}