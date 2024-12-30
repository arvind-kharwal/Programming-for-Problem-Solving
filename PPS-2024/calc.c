#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    while(1)
    {
        float a,b,res;
        int ch;
        system("cls");
        printf("\t\t\t\t\t\tCALCULATOR");
        printf("\n1.ADDITION");
        printf("\n2.SUBTRACTION");
        printf("\n3.DIVISON");
        printf("\n4.MULTIPLICATION");
        printf("\n5.PRESS 5 TO EXIT");
        printf("\n\n\t\t\t\t\tEnter your Choice: ");
        scanf("%d",&ch);
        if(ch==5)
            break;
        switch(ch)
        {
            case 1:
                system("cls");
                printf("\t\t\t\t\t\tADDITION");
                printf("\n\nEnter the two numbers: ");
                scanf("%f%f",&a,&b);
                res = a+b;
                printf("\nThe sum is %f",res);
                break;
            case 2:
                system("cls");
                printf("\t\t\t\t\t\tSUBTRACTION");
                printf("\n\nEnter the two numbers: ");
                scanf("%f%f",&a,&b);
                res = a-b;
                printf("\nThe subtraction is %f",res);
                break;
            case 3:
                system("cls");
                printf("\t\t\t\t\t\tDIVISION");
                printf("\n\nEnter the two numbers: ");
                scanf("%f%f",&a,&b);
                res = a/b;
                printf("\nThe division is %f",res);
                break;
            case 4:
                system("cls");
                printf("\t\t\t\t\t\tMULTIPLICATION");
                printf("\n\nEnter the two numbers: ");
                scanf("%f%f",&a,&b);
                res = a*b;
                printf("\nThe multiplication is %f",res);
                break;
            default:
                printf("\nYou have entered wrong choice!");
        }
    }
    return(0);
}
