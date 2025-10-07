#include <stdio.h>

int main(){
    int n;
    printf("Enter total elements of array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array : ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("The unsorted array is ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1-i ; j++){
            if(arr[j+1] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("The sorted array is ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}