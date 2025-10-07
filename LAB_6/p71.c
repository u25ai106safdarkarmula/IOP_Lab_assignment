#include <stdio.h>

int main(){
    int arr[]= {4,5,6,7,8,1,2,3}; int n = 7;
    int pivot;
    int low = 0, high = n;
    int mid = (low + high)/2;
    
    printf("The sorted and rotated array is ");
    for (int i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    while(1){
    if(arr[mid] > arr[mid -1]){
        low = mid + 1;
        mid = (low + high)/2;
    }
    else if(arr[mid] < arr[mid-1]){
        pivot = arr[mid]; break; 
    }
    else if(arr[mid] > arr[mid + 1]){
        pivot = arr[mid + 1]; break;
    }
    }
    printf("The pivot element is %d", pivot);
    return 0;
}