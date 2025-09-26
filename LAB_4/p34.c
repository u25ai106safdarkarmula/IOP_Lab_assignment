#include <stdio.h>

int fibo_series(int n);

int fibo_series(int n){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        return fibo_series(n - 1) + fibo_series(n - 2);
    }
}

int main(){
    int n;
    printf("Enter total number of digit you want to print : \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", fibo_series(i));
    }
    return 0;
}