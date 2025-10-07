#include <stdio.h>

int main(){
    int nums[10];
    printf("Enter 10 digits : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nums[i]);
    }
    
    printf("Before reversing ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", nums[i]);
        if(i != 9) printf(", ");
    }
    printf("\n");

    // swapping
    for (int i = 0; i < 5; i++)
    {
        int temp = nums[i];
        nums[i] = nums[10-i-1]; 
        nums[10-i-1] = temp;
    }
    
    printf("After reversing ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", nums[i]);
        if(i != 9) printf(", ");
    }
    
    return 0;
}