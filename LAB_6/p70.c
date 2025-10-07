#include <stdio.h>

int main(){
    int n, find, not_find, count = 0;
    printf("Enter total elements in array : ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    printf("Enter the element to find total occurences : ");
    scanf("%d", &find);

    for (int i = 0; i < n; i++){
        if(find != array[i]){
            not_find = 1;
        }
        else{
            not_find = 0;
            count++;
        }
    }
    printf("Total number of occurences of %d is %d", find, count);
    return 0;
}