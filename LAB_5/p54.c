#include <stdio.h>

int main(){
    int num[10], sum = 0;
    printf("Enter 10 numbers : ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &num[i]);
        sum += num[i];
    }
    printf("The numbers are ");
    for (int i = 0; i < 10; i++){
        printf("%d, ", num[i]);
    }
    printf("\n");
    printf("The sum of 10 numbers is %d", sum);

    return 0;
}