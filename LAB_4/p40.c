#include <stdio.h>

int main(){
    int num = 0, sum=0; 
    printf("Enter numbers : ");
    while(num >= 0){
        scanf("%d", &num);
        if(num >= 0){
            sum += num;
        }
        else{
            printf("You entered a negative value\n"
            "so the program stopped\n");
        }
    }
    printf("Sum is %d", sum);
    
    return 0;
}