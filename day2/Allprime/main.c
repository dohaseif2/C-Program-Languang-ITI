#include <stdio.h>
#include <stdlib.h>

int main()
{
    int end;
    int flag;

    printf("Enter the end of numbers : ");
    scanf("%d", &end);
    printf("the prime numbers is : ", end);

    int i,j ;
    for(i=2 ; i<=end; i++)
    {
        flag = 1;

        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                flag = 0;
            }
        }

        if(flag==1)
        {
            printf("\n %d  ", i);
        }
    }
    return 0;
}





