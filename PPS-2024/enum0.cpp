#include <stdio.h>
enum day {sunday = 1, monday, tuesday = 5,
        wednesday, thursday = 10,friday,};

int main()
{
    printf("%d\t%d\t%d\t%d\t%d\t%d",sunday,monday,tuesday,wednesday, thursday,friday);
    return 0;
}