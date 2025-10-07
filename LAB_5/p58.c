#include <stdio.h>

int main(){
    int num1[10], num2[10], numadd[10];
    printf("Enter 10 numbers for first array : ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &num1[i]);
        }
    printf("Enter 10 numbers for second array : ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &num2[i]);
    }
    printf("Sum of two arrays and that stored in third array are ");
    for (int i = 0; i < 10; i++){
        numadd[i] = num1[i] + num2[i];
        printf("%d, ", numadd[i]);
        }
    
    return 0;
}