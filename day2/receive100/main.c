#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ;
    int sum = 0;
    int number ;
    do{
      printf("Enter number");
      scanf("%d",&number);
      sum = sum +number;

    }while((sum<200));

printf("sum = %d" ,sum);

    return 0;
}
