
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }

int main()
{
    int size;
      do{
        printf("Enter size of array: ");
        scanf("%d",&size);
        system("cls");

     }while(size % 2 == 0  );
    int col,row;
    for (int i = 1; i <= size*size; i++)
    {
        if(i==1){
            row =1;
            col=(size+1)/2;

        }else if((i-1)% size == 0){
                row++;

        }else{
            row--;col--;
            if(row == 0){
                row=size;
            }
            if(col==0){
                col=size;
            }
        }
             gotoxy(col*4,row);
             printf("%d",i);
        }
         return 0;

    }



