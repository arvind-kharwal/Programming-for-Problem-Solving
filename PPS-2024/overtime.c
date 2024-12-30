#include<stdio.h>
int main()
{
	int i,hr;
    double bonus;
	for(i = 1 ; i <= 3 ; i++)
	{
		printf("\nEnter the working hour of the employ : ");
		scanf("%d", &hr);

		if(hr>40)
		{
			bonus = (hr - 40)*12;
			printf("\n%lf Rs. is the bonus of the employ\n\n", bonus);
		}
		else
			printf("\nThis employ has not done overtime.\n\n");
	}
	return 0;
}
