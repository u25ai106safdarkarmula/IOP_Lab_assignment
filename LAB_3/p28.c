#include <stdio.h>
#include <math.h>

int main(){
    int n, decimal,rem,count=0,sum=0;
    printf("Enter value of n : ");
    scanf("%d", &n);

    decimal = n;
    while(decimal != 0){
        decimal /= 10;
        count++;
    }
    decimal = n;
    while(decimal != 0){
        rem = decimal%10;
        sum += (int)round(pow(rem,count));
        decimal /= 10;
    }

    if(sum == n){
        printf("The number is armstrong");
    }
    else{
        printf("The number is not armstrong");
    }
    return 0;
}