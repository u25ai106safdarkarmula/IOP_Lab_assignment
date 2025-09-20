#include <stdio.h>

int main(){
    int n,decimal,rem,reverse=0;
    printf("Enter value of n : ");
    scanf("%d", &n);

    decimal = n;
    while(decimal != 0){
        rem = decimal%10;
        reverse = reverse*10 + rem;
        decimal /= 10;
    }
    printf("The reverse number is %d", reverse);
    return 0;
}