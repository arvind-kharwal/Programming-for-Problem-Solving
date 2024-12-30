#include<stdio.h>
#include<stdlib.h>
void numnod(struct node *);
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head -> data = 10;
    head->link = NULL;

    struct node *current = NULL;
    current = (struct node*)malloc(sizeof(struct node));
    current -> data = 20;
    current->link = NULL;
    head->link = current;
    
    current = (struct node*)malloc(sizeof(struct node));
    current -> data = 30;
    current->link = NULL;
    head->link->link = current;
    //printf("%d",head->data);
    numnod(head);
}
void numnod(struct node *head)
{
    int count =0;
    if(head==NULL)
        printf("\nList is empty");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL)
    {
        count++;
        ptr= ptr->link;
    }
    printf("\nThe count is %d",count);
    }
