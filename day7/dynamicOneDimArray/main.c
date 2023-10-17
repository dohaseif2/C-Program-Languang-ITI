#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i;
    printf("enter size of array");
    scanf("%d",&size);
    int* arr = malloc(size*sizeof(int));
    if(arr!=NULL){
        for(i=0;i<size;i++){
            printf("Enter element");
            scanf("%d",&arr[i]);
        }
        for(i=0;i<size;i++){
            printf("%d , ",arr[i]);
        }
    }

    return 0;
}
