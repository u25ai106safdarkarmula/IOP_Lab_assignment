#include <stdio.h>

int main(){
    int matrix[3][3], max;
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
    
    if(matrix[0][0] > matrix[0][0]) max = matrix[0][0];
    else if(matrix[0][0] < matrix[0][0]) max = matrix[0][0];
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if(matrix[i][j] > max);
            max = matrix[i][j]; 
        }
    }

    printf("The maximum of all element is %d", max);    
    return 0;
}