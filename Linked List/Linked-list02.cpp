#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *createlist(int);
void display(struct node *);
struct node *head = NULL;
int main()
{
    int i,n;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    head = createlist(n);
    printf("The linked list is:\n");
    display(head);
}
struct node *createlist(int n)
{
    struct node *temp = NULL;
    struct node *ptr = NULL;
    int i;
    for(i=0;i<n;i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data for node %d:",i+1);
        scanf("%d",&temp->data);
        temp->link = NULL;
        if(head==NULL)
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
    return head;
}