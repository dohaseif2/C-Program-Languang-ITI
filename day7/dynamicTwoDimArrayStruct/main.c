#include <stdio.h>
#include <stdlib.h>
struct emp
{
    int id;
    char name[20];
    int age;

};
int main()
{
    int i,size;
    printf("enter size you want");
    scanf("%d",&size);

    struct emp* ptr=(struct emp * )malloc(size*sizeof(struct emp));
    for(i =0; i< size; i++)
    {
        printf("Enter id ");
        scanf("%d",&(ptr->id));
        printf("Enter name ");
        scanf("%s",(ptr->name));
        printf("Enter age ");
        scanf("%d",&(ptr->age));
        printf("id : %d , ",ptr->id);
        printf("name : %s , ",ptr->name);
        printf("age : %d \n",ptr->age);

    }

    return 0;
}
