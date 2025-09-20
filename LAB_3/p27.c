#include <stdio.h>
#include <math.h>

int main(){
    int n, is_prime;
    printf("Enter value of n : ");
    scanf("%d", &n);

    if(n<=1){
        is_prime == 1;
    } 
    else{
        for (int i = 2; i <= sqrt(n); i++){
            if(n%i == 0){
            is_prime = 0;
            break;
            }
        }
    }
    if (is_prime){
        printf("Number is prime");
    }
    else{
        printf("Number is not prime");
    }
    return 0;
}