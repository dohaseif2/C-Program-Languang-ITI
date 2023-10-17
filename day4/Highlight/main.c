#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define null -32
void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
 void textattr(int i)
{
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}
int main()
{
    char name[3][10]={"new","display","exit"};
    int i=0;
    int cursor=0;
    int flag=0;
    char ch;
do{

    system("cls");
    for(i=0;i<3;i++)
    {
        gotoxy(10,5+i);
        if(i==cursor)
        textattr(0x27);
        printf("%s",name[i]);
        textattr(0x07);
    }
    ch = getch();
    switch(ch){
         case 27:
            flag=1;
            break;
        case 13:
            system("cls");
            if(cursor==2)
                flag=1;
            else
            printf("`%s" ,name[cursor]);
            getch();
            break;
        case -32:
        ch=getch();
        switch(ch){
        case 72:
            cursor--;
            if(cursor<0)
                cursor=2;
            break;
        case 71:
            cursor=0;
            break;
        case 80:
            cursor++;
            if(cursor>2)
              cursor=0;
              break;
        case 79:
            cursor=2;
            break;

        }


        }


        }while(flag==0);

    return 0;
}
