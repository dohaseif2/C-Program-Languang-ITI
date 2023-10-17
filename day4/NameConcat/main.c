#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fName[20],lName[20];
    printf("enter first name \n");
    scanf("%s",fName);
    printf("enter last name\n");
    scanf("%s",lName);
    char fullName[20];
    strcpy(fullName,fName);
    strcat(fullName," ");
    strcat(fullName,lName);
    printf(fullName);
    return 0;
}
