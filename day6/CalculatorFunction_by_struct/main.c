#include <stdio.h>
#include <stdlib.h>
struct calculator{
    int sum;
    int sub;
    int mult;
};
struct calculator calc(int x ,int y);

int main()
{
    int num1,num2;
    printf("Enter first number \n");
    scanf("%d",&num1);
    printf("Enter second number \n");
    scanf("%d",&num2);
    struct calculator c;
    c=calc(num1,num2);
    printf("Sum = %d , Sub =%d, Mul = %d ",c.sum,c.sub,c.mult);
    return 0;
}

struct calculator calc(int x ,int y){
    struct calculator c1;
    c1.sum = x+y;
    c1.sub=x-y;
    c1.mult=x*y;
    return c1;
}
