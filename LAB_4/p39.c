#include <stdio.h>

int fact(int);

int fact(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return fact(n-1)*n;
}

int main(){
    int n; float sum = 0;
    printf("Enter total terms : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        sum += ((float)i)/fact(i);
    }
    printf("Answer is %f", sum);
    return 0;
}