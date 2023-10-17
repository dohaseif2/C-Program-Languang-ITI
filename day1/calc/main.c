#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    int sum = num1 + num2 ;

    int sub = num1 - num2 ;
    int mul = num1 * num2 ;
    printf("%d + %d = %d \n%d - %d  = %d \n%d * %d = %d ",num1 , num2 ,sum ,num1 ,num2,sub ,num1,num2, mul);

    return 0;
}
