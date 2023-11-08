#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("\n Enter the character: ");
    scanf("%c",&ch);
    printf("\nThe character is %c",ch);
    int d = islower(ch);
    printf("%d",d);
    return(0);
}