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
    int i;
    for(i=Monday; i<=Sunday; i++)
    {
        printf("%d\n", i);
    }
}