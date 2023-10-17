
#include <stdio.h>
#include <stdlib.h>
struct emp
{
    int id;
    char name[10];
    int age;
    int salary;
    int overtime;
    int deduction;
};
int check(int length , int targetid);
struct emp arr[3];
int main()
{
 int i,totalSal;
    printf("*****Task 2******\n");
    for(i=0; i<3; i++)
    {
        printf("Employee number %d \n",i+1);
        printf("-------------------\n");
        printf("enter employee id\n");
        scanf("%d",&arr[i].id);
        do{
            if( check( i , arr[i].id)){
            printf("This id is not available please enter another id\n");
            scanf("%d",&arr[i].id);
            }

        }while(check( i , arr[i].id)==1);

        printf("Enter employee name\n");
        scanf("%s",arr[i].name);
        printf("Enter employee age\n");
        scanf("%d",&arr[i].age);
        printf("Enter employee salary\n");
        scanf("%d",&arr[i].salary);
        printf("Enter employee overtime\n");
        scanf("%d",&arr[i].overtime);
        printf("Enter employee deduction\n");
        scanf("%d",&arr[i].deduction);
        printf("================================== \n");
    }
    for(i=0;i<3;i++){
        totalSal=(arr[i].salary+arr[i].overtime)- arr[i].deduction;
        printf("employee %d info : %d : %s : %d : %d\n",i+1,arr[i].id,arr[i].name,arr[i].age,totalSal);
    }


    return 0;
}

int check(int index , int targetid){
    int j;
    for(j=0;j<index;j++){
        if(arr[j].id==targetid){
            return 1;
        }
    }
    return 0;
}
