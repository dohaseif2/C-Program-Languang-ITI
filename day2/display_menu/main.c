#include <stdio.h>
#include <stdlib.h>

int main()
{

    int flag =0;
    char menu;
    do{

    system("cls");

    printf("\n new \n display \n exit");
    menu = getch();

    switch (menu){
    case 'n':
    case 'N':
        printf("you select new");
        getch();
        break;
    case 'd':
    case 'D':
        printf("you select display ");
        getch();
        break;
    case 'e':
    case 'E':
        printf("you select exit");
        flag = 1;
        break;
    case 27:
        flag =1;
    }
    }while(flag== 0);

    return 0;
}
