#include <stdio.h>

int main(){
    int num[10], even = 0, odd = 0;
    printf("Enter 10 numbers : ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &num[i]);
        if(num[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("The numbers are ");
    for (int i = 0; i < 10; i++){
        printf("%d, ", num[i]);
    }
    printf("\n");
    printf("Total even number is %d\n", even);
    printf("Total odd number is %d\n", odd);
    return 0;
}