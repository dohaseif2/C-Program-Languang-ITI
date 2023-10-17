#include <stdio.h>
#include <stdlib.h>
struct emp{
    int id;
    int age;
    char name[5];
};
int main()
{

    struct emp e1;
    struct emp* ptr=&e1;
    printf("Enter id ");
    scanf("%d",&(ptr->id));
    printf("Enter name ");
    scanf("%s",(ptr->name));
    printf("Enter age ");
    scanf("%d",&(ptr->age));
    printf("id : %d , ",ptr->id);
    printf("name : %s , ",ptr->name);
    printf("age : %d ",ptr->age);
    return 0;
}
