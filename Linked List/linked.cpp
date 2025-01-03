#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node * createlist(int);
void display(struct node *);
int main()
{
    struct node * head = NULL;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    head = createlist(n);
    printf("\nThe linked list: ");
    display(head);
    return(0);
}
struct node * createlist(int n)
{
    int i = 0;
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node * ptr = NULL;
    for(i=0;i<n;i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data: ");
        scanf("%d",&temp->data);
        temp->link = NULL;
        if(head ==NULL)
        {
            head = temp;
        }
        else
        {
            ptr = head;
            while(ptr->link!=NULL)
            {
                ptr = ptr->link;
            }
            ptr->link = temp;
        }
    }
    return(head);
}

void display(struct node *head)
{
    struct node * ptr = head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->link;
    }
}