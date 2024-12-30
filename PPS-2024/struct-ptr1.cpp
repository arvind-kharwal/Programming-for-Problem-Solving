#include<stdio.h>
struct Employee
{
    int id;
    float sal;
    char name[20];
};
int main()
{
    struct  Employee *E,p;
    E = &p;
    printf("\n Enter the id: ");
    scanf("%d",&E->id);
    printf("\n Enter the salary ");
    scanf("%f",&E->sal);
    printf("\n Enter the name ");
    scanf("%s",&E->name);
    printf("\n The data is: ");
    printf("%d\t%f\t%s",E->id,E->sal,E->name);
}