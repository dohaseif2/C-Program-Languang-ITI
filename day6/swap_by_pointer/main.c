#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("Enter first number \n");
    scanf("%d",&num1);
    printf("Enter second number \n");
    scanf("%d",&num2);

    swap(&num1,&num2);
    printf("First number = %d AND second number = %d ",num1,num2);
    return 0;
}
void swap(int* x,int* y){
    int temp = *x;
    *x=*y;
    *y=temp;


}
