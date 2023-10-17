#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,sum=0,sub=0,mult=0;
    printf("Enter first number \n");
    scanf("%d",&num1);
    printf("Enter second number \n");
    scanf("%d",&num2);

    calc(&num1,&num2,&sum,&sub,&mult);
    printf("Sum = %d , Sub =%d, Mul = %d ",sum,sub,mult);
    return 0;
}
void calc(int* x ,int* y,int* sum,int* sub ,int* mult){
    *sum = *x + *y;
    *sub = *x - *y;
    *mult =*x * *y;
}




