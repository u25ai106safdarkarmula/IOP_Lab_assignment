#include <stdio.h>

int main(){
    int n, rightorleft, rotate;
    printf("Enter the total elements of array : ");
    scanf("%d", &n);
    int arr[n], temp[n];
    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter direction of rotate (0 for right and 1 for left) : ");
    scanf("%d", &rightorleft);
    printf("Enter value to rotate : ");
    scanf("%d", &rotate);
    rotate %= n;

    printf("Before rotation : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    if (rightorleft){
        for (int i = 0; i < rotate; i++){
            temp[i] = arr[i];
        }
        for (int i = rotate; i < n; i++){
            arr[i - rotate] = arr[i];
        }
        for (int i = 0; i < rotate; i++){
            arr[n - rotate + i] = temp[i];
        }
    }

    if (!rightorleft){
        for (int i = 0; i < rotate; i++){
            temp[i] = arr[n - rotate + i];
        }
        for (int i = n - rotate - 1; i >= 0; i--){
            arr[i + rotate] = arr[i];
        }
        for (int i = 0; i < rotate; i++){
            arr[i] = temp[i];
        }
    }
    
    printf("After rotation : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}