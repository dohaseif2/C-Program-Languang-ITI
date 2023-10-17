#include <stdio.h>
#include <stdlib.h>

int main()
{

  int num;
  printf("Enter an integer: ");
  scanf("%d", &num);

  int   reversed = 0, remainder;
  while (num != 0) {
    reversed = (reversed * 10) + (num%10);
    num /= 10;
  }

  printf("Reversed number = %d", reversed);

  return 0;

    return 0;
}
