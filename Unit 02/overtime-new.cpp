#include<stdio.h>
int main()
{
    int i,hr;
    double overtime;
    for(i=0;i<2;i++)
    {
        printf("\nEnter the overtime of the employee: ");
        scanf("%d",&hr);
        if(hr>40)
        {
            overtime = (hr-40)*12.0;
            printf("%lf",overtime);
        }
        else
        printf("\nThe employee has not done overtime!");
    }

}