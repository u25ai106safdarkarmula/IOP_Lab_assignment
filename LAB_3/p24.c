#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float y,x;
    printf("Enter value of x : ");
    scanf("%f", &x);
    printf("Enter value of  n : ");
    scanf("%d", &n);
    
    if(n == 1){
        y = 1.0 + x;
    }
    else if(n==2){
        y = 1.0 + (x/n);
    }
    else if(n==3){
        y = 1.0 + pow(x,n);
    }
    else if(n>3 || n<1){
        y = 1.0 + n*x;
    }
    printf("%f", y);
    return 0;
}