#include <stdio.h>

int main(){
    int n,max=0,min;
    int num[100];
    printf("Enter total numbers : ");
    scanf("%d", &n);
    printf("Enter the numbers\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    if (num[0] > num[1]){
        max = num[0];
        min = num[1];
    }
    else{
        max = num[1];
        min = num[0];
    }
    for (int j = 0; j < n; j++)
    {
        if(num[j] > max){
            max = num[j];
        }
    }
    min = max;
    for (int j = 0; j < n; j++)
    {
        if(num[j] < min){
            min = num[j];
        }
    }
    
    printf("Maximum of all number is %d\n", max);
    printf("Minimum of all number is %d\n", min);
    return 0;
}