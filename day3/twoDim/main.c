#include <stdio.h>
#include <stdlib.h>
#define row 3
#define col 2
int main()
{
    int arr[row][col]={{0}};

    int i , j ;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Enter number \n");
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf(" %d  ",arr[i][j]);
        }
        printf("\n");
    }
    int sum , avg;
    for(i=0;i<row;i++){
            sum = 0;
        for(j=0;j<col;j++){
            sum+=arr[i][j];
        }
        printf("Sum of row %d = %d \n" ,i+1,sum);
     //   printf("Avage of row %d = %d \n" ,i+1,sum/col);
    }
    for(i=0;i<col;i++){
        sum=0;
        for(j=0;j<row;j++){

            sum+=arr[j][i];

        }
            printf("Avrage of col %d = %d  \n" ,j+1,sum/row);
    }

    return 0;
}
