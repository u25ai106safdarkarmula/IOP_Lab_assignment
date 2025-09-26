#include <stdio.h>

int main(){
    int n,is_prime;
    printf("Enter number n : ");
    scanf("%d", &n);

    if(n==0 || n==1 || n==2){
        is_prime == 1;
    }
    else{
        for (int i = 2; i < n; i++)
        {
            if(n%i == 0){
                is_prime = 0;
                break;
            }
        }
    }

    if(is_prime){
        printf("%d is prime", n);
    }
    else{
        printf("%d is composite", n);
    }
    return 0;
}