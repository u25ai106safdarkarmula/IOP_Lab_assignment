#include <stdio.h>

int main(){
    int fac = 1, n = 0;
    printf("Enter numebr : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        fac = fac*i;
    }
    printf("The factorial of %d is %d", n, fac);
    return 0;
}