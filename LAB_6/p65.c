#include <stdio.h>

int main(){
    int matrix[3][3];
    printf("Enter the elements of matrix : ");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &matrix[i][j]);
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

    printf("Transpose of matric is\n");
    for (int i = 0; i < 3; i++){
        printf("|");
        for (int j = 0; j < 3; j++){
            if(i == 0 || j == 2){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
            }
            printf(" %d ", matrix[i][j]);
        }
        printf("|\n");
    }
    
    
    return 0;
}