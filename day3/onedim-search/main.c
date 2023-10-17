#include <stdio.h>
#include <stdlib.h>
#define size 5

int main()
{
    int arr[size]={0};

    int i;
    for(i=0;i<size;i++){
        printf("enter number \n");
        scanf("%d",&arr[i]);

    }
    printf("Enter the number you want to find");
    int num;
    scanf("%d",&num);
    for(i=0;i<size;i++){
        if(num==arr[i]){
            printf("The index of the number is : %d",i+1);
            break;
        }
    }

    if(i != num ){
            printf("The number is not in array ");
    }
    return 0;
}
