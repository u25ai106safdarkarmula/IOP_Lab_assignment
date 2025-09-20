#include <stdio.h>

int main()
{
    int n, sum_even = 0, sum_odd = 0;
    printf("Enter value of n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i+=2)
    {
        sum_odd += i;
    }
    
    for (int j = 0; j <= n; j+=2)
    {
        sum_even += j;
    }

    printf("Sum of odd number between 1 and %d is %d\n", n, sum_odd);
    printf("Sum of even number between 1 and %d is %d\n", n, sum_even);
    return 0;
}