#include <stdio.h>

int main()
{
    int n, decimal, sum;
    printf("Enter value of n : ");
    scanf("%d", &n);

    decimal = n;
    sum = 0;
    for (int i = 0; i < n; i++){
        while (decimal != 0){
            sum += decimal % 10;
            decimal /= 10;
        }
        if(sum <= 9){
            break;
        }
        else{
            printf("Sum of digit is %d\n", sum);
            decimal = sum;
            sum =0;
        }
    }
    printf("Single digit sum is %d", sum);
    return 0;
}