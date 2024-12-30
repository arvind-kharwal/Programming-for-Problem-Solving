#include<stdio.h>
#include<stdlib.h>
struct Employee display(struct Employee);
struct Employee
{
    int id;
    char name[20];
    float sal;
};
int main()
{
    struct Employee E = {1,"Arvind"},r;
    r = display(E);
    printf("%d\t%s\t%f",r.id,r.name,r.sal);
}
struct Employee display(struct Employee p)
{
    p.sal = 29.5;
    return(p);
}