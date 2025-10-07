#include <stdio.h>

int main(){
    int n;char ch = 'A';
    printf("Enter total lines want to print : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("%c", ch);
        }
        ch++;
        printf("\n");
    }
    
    return 0;
}