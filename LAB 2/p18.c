#include <stdio.h>

int main()
{
    int a, b, c, max;
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);
    printf("Enter value of c : ");
    scanf("%d", &c);

    max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("%d is max", max);

    return 0;
}
