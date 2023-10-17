#include <stdio.h>
#include <stdlib.h>
#define size 3

struct emp{
int id;
char name[20];
int age;
int salary;
int overTime;
int dedection;

};
int check(int length , int targetid);
struct emp arr[3];

int main()
{
     struct emp e1;
    printf("==========First Task============ \n");
    printf("enter id \n" );
    scanf("%d",&e1.id);
    printf("enter name \n" );
    scanf("%s",&e1.name);
    printf("enter age \n" );
    scanf("%d",&e1.age);
    printf("enter salary \n" );
    scanf("%d",&e1.salary);
    printf("enter Over Time \n" );
    scanf("%d",&e1.overTime);
    printf("enter dedection \n" );
    scanf("%d",&e1.dedection);



    int fullSalary = e1.salary+e1.overTime-e1.dedection;
    printf("\n id : %d , name : %s , age :%d , Full Salary :%d",e1.id,e1.name,e1.age,fullSalary);
    printLine();



    int i;
    for(i=0;i<3;i++){
        printf("enter id for employee number %d \n" ,i+1);
        scanf("%d",&arr[i].id);
           do{
            if( check( i , arr[i].id)){
            printf("this id is invalid please enter another id");
            scanf("%d",&arr[i].id);
        }

        }while(check( i , arr[i].id)==1);





        printf("enter name for employee number %d \n" ,i+1);
        scanf("%s",arr[i].name);
        printf("enter age for employee number %d \n" ,i+1);
        scanf("%d",&arr[i].age);
        printf("enter salary for employee number %d \n" ,i+1);
        scanf("%d",&arr[i].salary);
        printf("enter overTime for employee number %d \n" ,i+1);
        scanf("%d",&arr[i].overTime);
        printf("enter dedection for employee number %d \n" ,i+1);
        scanf("%d",&arr[i].dedection);
        printLine();
    }
    for(i=0;i<5;i++){
        printf("\n information about employee number %d \n",i+1);
        printf("Id : %d ," ,arr[i].id);
        printf("Name : %d ,", arr[i].name);
        printf("Age : %d , ", arr[i].age);


        printf("Full Salary = %d .", arr[i].salary +arr[i].overTime-arr[i].dedection);
    }

    return 0;
}

void printLine(){
    printf("\n======================================================\n");


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
