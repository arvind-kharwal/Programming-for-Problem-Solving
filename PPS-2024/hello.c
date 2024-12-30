#include<stdio.h>
int main()
{
    int P,C,M,E,H,tot;
    float per;
    printf("Enter the marks:");
    scanf("%d%d%d%d%d",&P,&C,&M,&E,&H);
    tot = P+C+M+E+H;
    per = tot/5;
    printf("\nThe aggregate marks %d",tot);
    printf("\nThe percentage of marks %f",per);
    return(0);
}
