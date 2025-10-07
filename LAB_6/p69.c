#include <stdio.h>

int main(){
    int n, find, not_find;
    printf("Enter total elements in array : ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    printf("Enter the element to serach : ");
    scanf("%d", &find);

    for (int i = 0; i < n; i++){
        if(find != array[i]){
            not_find = 1;
        }
        else{
            not_find = 0;
            printf("%d is found at index number %d", find, i);
            break;
        }
    }
    if(not_find){
        printf("OOPS! %d is not found", find);
    }    
    return 0;
}