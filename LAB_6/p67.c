#include <stdio.h>

int main(){
    int matrix1[3][3], matrix2[3][3], matrix3[3][3];
    printf("Enter the elements of first matrix : ");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of second matrix : ");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    
    printf("The first matric is\n");
    for (int i = 0; i < 3; i++){
        printf("|");
        for (int j = 0; j < 3; j++){
            printf(" %d ", matrix1[i][j]);
        }
        printf("|\n");
    }
    printf("The second matric is\n");
    for (int i = 0; i < 3; i++){
        printf("|");
        for (int j = 0; j < 3; j++){
            printf(" %d ", matrix2[i][j]);
        }
        printf("|\n");
    }
    printf("The third matric is\n");
    for (int i = 0; i < 3; i++){
        printf("|");
        for (int j = 0; j < 3; j++){
            printf(" %d ", matrix3[i][j]);
        }
        printf("|\n");
    }
    
    return 0;
}