#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node * head = NULL; // it used to hold the address of first node
struct node * createlist(int);
void display(struct node *);
int main()
{
    
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
    struct node *temp = NULL; // it is used to create individual nodes 
    struct node * ptr = NULL; // it is used to iterate the list to add the node at correct position
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