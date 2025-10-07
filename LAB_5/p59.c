#include <stdio.h>

void printarray(int arr[]);

void printarray(int arr[]){
    for (int i = 0; i < 10; i++){
        printf("%d ,", arr[i]);
    }
}
int main(){
    int num1[10], num2[10], temp;
    printf("Enter 10 numbers for first array : ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &num1[i]);
    }
    printf("Enter 10 numbers for second array : ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &num2[i]);
    }

    printf("Before swapping :\n");
    printf("The elements of first array are ");
    printarray(num1);
    printf("\n");
    printf("The elements of second array are ");
    printarray(num2);
    printf("\n");

    for (int i = 0; i < 10; i++){
        temp = num1[i];
        num1[i] = num2[i];
        num2[i] = temp;
    }
    
    printf("After swapping :\n");
    printf("The elements of first array are ");
    printarray(num1);
    printf("\n");
    printf("The elements of second array are ");
    printarray(num2);
    printf("\n");
    
    return 0;
}