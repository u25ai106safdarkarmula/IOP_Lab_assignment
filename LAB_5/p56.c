#include <stdio.h>

int main(){
    int num[10], postv = 0, neg = 0, zero = 0;
    printf("Enter 10 numbers : ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &num[i]);
        if(num[i] > 0){
            postv++;
        }
        else if(num[i] == 0){
            zero++;
        }
        else{
            neg++;
        }
    }
    printf("The numbers are ");
    for (int i = 0; i < 10; i++){
        printf("%d, ", num[i]);
    }
    printf("\n");
    printf("Total postive number is %d\n", postv);
    printf("Total negative number is %d\n", neg);
    printf("Total zero number is %d\n", zero);
    return 0;
}