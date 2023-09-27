#include<stdio.h>
int main()
{
    int P,C,M,E,H,tot;
    float per;
    printf("\nEnter the marks: ");
    scanf("%d%d%d%d%d",&P,&C,&M,&E,&H);
    tot = P+C+M+E+H;
    per = tot/5;
    if(per>=60)
        printf("First");
    else
    {
        if(per>=50)
            printf("Second");
        else
        {
            if(per>=40)
                printf("Third");
            else
                printf("Fail");
        }
    }
    return(0);
}