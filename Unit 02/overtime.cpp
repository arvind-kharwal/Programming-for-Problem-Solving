#include<stdio.h>
int main()
{
    int wh,i,ot;
    float otp;
    for(i=1;i<=10;i++)
    {
        printf("\nEnter the working hours of Employee %d: ",i);
        scanf("%d",&wh);
        if(wh>40)
        {
            ot = wh-40;
            otp = ot*12.00;
            printf("\nThe overtime pay is %f",otp);
        }
        else
            printf("You have to work more to get extra payment");
    }
    return(0);
}