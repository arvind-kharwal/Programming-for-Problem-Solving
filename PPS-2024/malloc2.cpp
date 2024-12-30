#include<stdio.h>
#include<stdlib.h>
struct Student
{
    int r;
    char name[20];
    float p;
};
int main()
{
    struct Student *s;
    s = (struct Student *) malloc(sizeof(struct Student));
    if(s==NULL)
    {
        printf("Memory not avialable");
        exit(1);
    }
    printf("\nEnter the data: ");
    scanf("%d\t%s\t%f",&s->r,&s->name,&s->p);
    printf("\nThe data: ");
    printf("%d%s%f",s->r,s->name,s->p);
}