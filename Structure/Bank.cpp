#include <stdio.h>
struct Bank
{
    int ac;
    char name[20];
    float bal;
};

int main()
{
    struct Bank B[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter account number, name and balance of customer %d\n",i+1);
        scanf("%d %s %f",&B[i].ac,B[i].name,&B[i].bal);
    }
    printf("Account number\tName\tBalance\n");
    for(i=0;i<3;i++)
    {
        printf("%d\t%s\t%f\n",B[i].ac,B[i].name,B[i].bal);
    }
    for(i=0;i<3;i++)
    {
        if(B[i].bal<100)
        {
            printf("Account number %d has balance less than 100\n",B[i].ac);
        }
    }

}