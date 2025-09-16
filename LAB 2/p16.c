#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter first numebr : ");
    scanf("%d", &a);
    printf("Enter second numebr : ");
    scanf("%d", &b);
    printf("Enter third numebr : ");
    scanf("%d", &c);

    if(a>b){
        if(a>c){
        printf("%d is max", a);
        }
        else{
            printf("%d is max", c);
        }
    }
    else{
        printf("%d is max", b);
    }
    return 0;
}