#include <stdio.h>
#include <stdlib.h>
int Factorial(int num);

int main()
{   int num;
    printf("Enter number : \n");
    scanf("%d",&num);
    printf("%d",Factorial(num));
    return 0;
}


int Factorial(int num){

    int fact=1;
    int i;
    for(i=1;i<=num;i++){
      fact *= i;
    }
    return fact;
}
