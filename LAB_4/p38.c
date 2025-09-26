#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Enter total terms to be print : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d, ", (int)round(pow(i,2)));
    }
    
    return 0;
}