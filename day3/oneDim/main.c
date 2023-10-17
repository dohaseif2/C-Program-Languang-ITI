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
    int sum = 0;
    for(i=0;i<size;i++){
        sum +=arr[i];
    }
    printf("Sum = %d \n" ,sum);


    int max=arr[0];
    for(i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("Max = %d \n",max);
    printf("\n===================================");

    int min=arr[0];
    for(i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("\nMin = %d \n",min);




    return 0;
}
