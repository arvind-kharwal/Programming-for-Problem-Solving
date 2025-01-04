#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head = NULL;
    struct node *current = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;
    printf("\nThe data: %d", head->data);
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 20;
    current->link = NULL;
    head->link = current;
    printf("\nThe data: %d", current->data);
    printf("\nUsing Head: %d", head->link->data);
}