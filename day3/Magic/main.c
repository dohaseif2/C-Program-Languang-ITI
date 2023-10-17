#include <stdio.h>
#include<conio.h>
#include <windows.h>

void gotoxy(int x , int y){
  COORD coord = {0,0};
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


int main(){
  int col,row,i,size,totalSize;

    printf("please enter size of magic box: ");
    scanf("%d",&size);


    totalSize =size * size ;
    for(i=1 ; i<=totalSize ;i++){
        if(i==1){
          row =1;
          col=(size+1)/2;
        }
        else if((i-1) % size == 0){
          row++;
        }
        else{
          row--; col--;
          if(row == 0)
            row = size;
          if(col == 0)
            col = size;
        }

        gotoxy(col,row);
        printf("%d",i);
    }


  return 0;
}
