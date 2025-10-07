#include <stdio.h>

int main(){
    int matrix[3][3], sum1, sum2, sum3;
    sum1 = sum2 = sum3 = 0;
    printf("Enter the elements of matrix : ");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &matrix[i][j]);
            if(i == 0) sum1 += matrix[i][j];
            if(i == 1) sum2 += matrix[i][j];
            if(i == 2) sum3 += matrix[i][j];
        }
    }

    printf("The matric is\n");
    for (int i = 0; i < 3; i++){
        printf("|");
        for (int j = 0; j < 3; j++){
            printf(" %d ", matrix[i][j]);
        }
        printf("|\n");
    }
    printf("The sum of first row is %d\n", sum1);
    printf("The sum of seocnd row is %d\n", sum2);
    printf("The sum of third row is %d\n", sum3);
    return 0;
}