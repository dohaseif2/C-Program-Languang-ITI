#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,power;
    printf("Enter number : \n");
    scanf("%d",&num);

    printf("Enter power : \n");
    scanf("%d",&power);

    printf("The Power = %d ",Power(num,power));
    return 0;
}

int Power(int x,int n)
{
    int i;
    int result = 1;
    for (i = 0; i < n; i++)
        result *= x;

    return  result;
}
