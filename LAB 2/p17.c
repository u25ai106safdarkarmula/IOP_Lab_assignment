#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter first numebr : ");
    scanf("%d", &a);
    printf("Enter second numebr : ");
    scanf("%d", &b);
    printf("Enter third numebr : ");
    scanf("%d", &c);

    if(a>b && a>c){
        printf("%d is max", a);
    }
    else if (b>c && b>a){
        printf("%d is max", b);
    }
    else{
        printf("%d is max", c);
    }
    return 0;
}