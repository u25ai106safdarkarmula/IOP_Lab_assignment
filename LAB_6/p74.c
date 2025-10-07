#include <stdio.h>

int main(){
    int arr1[10] = {2,4,7,9,13,18,21,24,27,30};
    int arr2[10] = {1,3,8,11,19,20,22,23,32,36};
    int sortarr[20];

    printf("Array 1 is ");
    for (int i = 0; i < 10; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Array 2 is ");
    for (int i = 0; i < 10; i++){
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    int i =0, j = 0, k = 0;
    while(1){
        if(i==10 && j==10 && k==20) break;
        else if(arr1[i] > arr2[j]){
            sortarr[k] = arr2[j];
            k++; j++;
        }
        else{
            sortarr[k] = arr1[i];
            k++; i++;
        }
    }
    printf("The combined sorted array is ");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", sortarr[i]);
    }
    
    return 0;
}