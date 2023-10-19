#include<stdio.h>
int main()
{
int (*ptr)[5],*p;
int arr[5] = { 1, 2, 3, 4, 5 };
p = arr;
ptr = &arr;
printf("p = %u, ptr = %u\n", p, ptr);
printf("p = %d, ptr = %d\n", *p, *ptr[1]);
return 0;
}

