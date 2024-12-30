#include<stdio.h>
int main()
{
int i, low, high, mid, n, a[7];
printf("Enter values in array a: ");
for(i = 0; i<7; i++)
scanf("%d",&a[i]);
printf("Enter value to find");
scanf("%d", &n);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) 
{
	if(n ==  a[mid])
	{
		printf("%d found at location %d", n, mid+1);
		break;
	}
	else if (n < a[mid])
	{
		high = mid -1;
	}
	else
		low = mid + 1;

	mid = (low + high)/2;
}
if(low > high)
printf(" %d isn't fount in the array a", n);
return 0;
}