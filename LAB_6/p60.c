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

    int min;
    for (int i = 0; i < n; i++){
        min = i;
        for (int j = i; j < n; j++){
            if(arr[j] < arr[min]) min = j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    printf("The sorted array is ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}