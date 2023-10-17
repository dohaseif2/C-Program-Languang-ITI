#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter number \n");
    scanf("%d",&num);
    int i;
    int factorial=1;
    for(i=1;i<=num;i++){
      factorial =factorial*i;
    }
    printf("Factorial of %d is %d",num,factorial);

    return 0;
}
