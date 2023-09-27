#include<stdio.h>
int main()
{
    int qty,ppi;
    float tot;
    printf("Enter the quantity & pay per item");
    scanf("%d%d",&qty,&ppi);
    if(qty>1000)
        tot = qty*ppi - (qty*ppi*10/100);
    else
        tot = qty*ppi;
    printf("\nThe total expanses %f",tot);
    return(0);
}