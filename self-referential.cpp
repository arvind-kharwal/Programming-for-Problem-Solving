#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node s1;
    s1.data = 10;
    s1.link = NULL;
    struct node s2;
    s2.data = 20;
    s2.link = NULL;
    s1.link = &s2;
    printf("\n S1 Data: %d", s1.data);
    printf("\n S2 Data: %d", s2.data);
    printf("\n We are accesing S2 Data from S1: %d", s1.link->data);
}