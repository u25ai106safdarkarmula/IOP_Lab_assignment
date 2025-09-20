#include <stdio.h>

int main(){
    int n,decimal,rem,sum=0;
    printf("Enter value of n : ");
    scanf("%d", &n);

    decimal = n;
    while(decimal != 0){
        rem = decimal%10;
        sum+=rem;
        decimal /= 10;
    }
    printf("The sum of digit is %d", sum);
    return 0;
}