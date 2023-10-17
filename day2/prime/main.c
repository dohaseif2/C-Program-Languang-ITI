#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   int flag = 0;
   printf("please enter number: ");
   scanf("%d", &num);

   if ( num == 1)
     flag = 1;
   int i;
   for (i = 2; i < num ; ++i) {
     if (num % i == 0) {
       flag = 1;
       break;
     }
   }

  if (flag == 0)
     printf("%d is prime number.", num);
  else
    printf("%d is not prime number.", num);
     return 0;
}
