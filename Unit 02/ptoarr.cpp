#include<stdio.h>
int main()
{
int arr[5] = { 1, 2, 3, 4, 5 };
//int *ptr = arr;
int *ptr;
ptr = arr;
printf("\n%u",ptr);
printf("\n%u",&arr);
printf("\n%d",*ptr);
return 0;
}

