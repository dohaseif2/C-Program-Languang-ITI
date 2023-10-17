#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define null -32
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void textattr(int i)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}
struct emp
{
    int id;
    char name[20];
    int age;

};
void Display(int size);
void DeleteByName(int size);
void DeleteById(int size);
void AddNewEmployee(int size);
int SearchId(int size ,int Id);
int validData();
int SearchName( int size,int seletedName);
int CheckId(int size, int index, int newId );
//struct emp arr[5];
struct emp* arr ;

int main()
{
    char name[5][20]= {"new","display","delete By ID","delete By Name","exit"};
    int i=0;
    int cursor=0;
    int flag=0;
    char ch;
    int size;

    printf("enter size");
    scanf("%d",size);
    arr=(struct emp * )malloc(size*sizeof(struct emp));
    int checkId=0;
    for(int i=0; i<5; i++)
    {
        arr[i].id=-1;
    }

    do
    {

        system("cls");
        for(i=0; i<5; i++)
        {
            gotoxy(10,5+i);
            if(i==cursor)
                textattr(0x27);
            printf("%s",name[i]);
            textattr(0x07);
        }
        ch = getch();
        switch(ch)
        {
        case 27:
            flag=1;
            break;
        case 13:
            system("cls");
            if(cursor==4)
                flag=1;
            else if(cursor==0)  //add new employee
            {
                AddNewEmployee(size);
            }
            else if(cursor == 1)    //Display employees
            {
                Display(size);

            }
            else if(cursor == 2)    //Delete employee by id
            {
                DeleteById(size);
            }
            else if(cursor == 3 )   //Delete employee by name
            {
                DeleteByName(size);
            }
            else
                printf("`%s",name[cursor]);

            getch();
            break;
        case -32:
            ch=getch();
            switch(ch)
            {
            case 72:
                cursor--;
                if(cursor<0)
                    cursor=4;
                break;
            case 71:
                cursor=0;
                break;
            case 80:
                cursor++;
                if(cursor>4)
                    cursor=0;
                break;
            case 79:
                cursor=4;
                break;

            }
        }


    }
    while(flag==0);

    return 0;
}

void AddNewEmployee(int size)
{
    int index,checkId;
    printf("Add new Employee\n");
    printf("which index you want to store employee \n");
    scanf("%d",&index);
    do
    {
        //check the index
        if(arr[index].id != -1)
        {
            printf("This index invalid - scan another index");
            scanf("%d",&index);
        }
    }
    while(arr[index].id !=-1);

    printf("enter id : ");
    scanf("%d",&arr[index].id);

    do
    {
        checkId=0; //check the id
        int j;
        if(CheckId(size,index,arr[index].id)==1)
        {
            printf("This id invalid - scan another id");
            scanf("%d",&arr[index].id);

        }
    }
    while(checkId==1);
    printf("enter name : ");
    scanf("%s",arr[index].name);
    printf("enter age :");
    scanf("%d",&arr[index].age);
    printf("****Employee added successfuly****");

}
void Display(int size)
{

    if(CheckIfThereIsData(size)==1)
    {
        int i =validData(size);
        printf("******employee number******* %d \n",i+1);
        printf("employ id %d \n",arr[i].id);
        printf("employ name %s \n",arr[i].name);
        printf("employ age %d \n",arr[i].age);
        printf("===========================\n");


    }

    else
    {
        printf("there is no employee to delete");
    }
}
void DeleteById(int size)
{
    int k,count=0, Id;

    if(CheckIfThereIsData(size)==1)
    {
        printf("Enter Id you want to delete");
        scanf("%d",&Id);
        if(SearchId(size,Id)==1)
        {
            printf("*****Employee deleted successfuly*****");
        }
    }
    else
    {
        printf("there is no employee to delete");
    }

}
void DeleteByName(int size)
{

    int k,count=0;
    char seletedName[20];

    if(CheckIfThereIsData(size)==1)
    {

        printf("Enter Name you want to delete");
        scanf("%s",seletedName);
        if(SearchName(size,seletedName)==1)
        {
            printf("*****Employee deleted successfuly*****");
        }
    }
    else
    {
        printf("there is no employee to delete");

    }
}
int CheckIfThereIsData(int size)
{

    int  k,count=0;
    for(k=0; k<size; k++)
    {
        if(arr[k].id==-1)
        {
            count++;
        }
    }
    if(count!=5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int SearchId(int size ,int Id)
{
    int i;
    for(i=0; i<5; i++)
    {
        if(arr[i].id==Id)
        {
            arr[i].id=-1;
            return 1;

        }
    }
}
int SearchName( int size,int seletedName)
{
    int i;
    for(i=0; i<size; i++)
    {
        if( !strcmp(arr[i].name, seletedName ))
        {
            arr[i].id=-1;
            return 1;
        }

    }
}
int CheckId(int size, int index, int newId )
{
    int j;
    for(j=0; j<5; j++)
    {

        if(arr[j].id==arr[index].id && j !=index )
        {

            return 1;


        }

    }
}
int validData(int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(arr[i].id !=-1)
        {
            return i;
        }
    }
}
