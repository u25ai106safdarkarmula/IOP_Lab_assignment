#include <stdio.h>

int main()
{
    int a, b, sqrt = 1;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    for (int i = 0; i < b; i++)
    {
        sqrt *= a;
    }
    printf(" pow(%d,%d) is %d", a, b, sqrt);
    return 0;
}