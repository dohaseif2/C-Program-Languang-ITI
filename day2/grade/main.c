#include <stdio.h>
#include <stdlib.h>

int main()
{
    int degree;
    printf("Enter degree");
    scanf("%d",&degree);

    if(degree <=100 && degree >=90)
    {
        printf("Excellent");
    }
    else if(degree<=90 && degree >80)
    {
        printf("very good");

    }
    else if(degree<=80 && degree >70)
    {
        printf("good");

    }
    else if(degree<=70 && degree >=60)
    {
        printf("Acceptable");
    }
    else if(degree<60)
    {
        printf("failed");

    }else{
        printf("please enter correct number");

    }
    return 0;
}
