#include <stdio.h>

int main(){
    int n;
    printf("Enter total lines want to print : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
        {
            if(j == i){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
    
    return 0;
}