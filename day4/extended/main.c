#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter key \n");
    char character ;
    character=getch();
    if(character == -32){
        printf("This extended key \n");
        character=getch();
        printf("%c : %d",character,character);
    }else{

        printf("This normal key \n");
        printf("%c : %d",character,character);

    }
    return 0;
}
