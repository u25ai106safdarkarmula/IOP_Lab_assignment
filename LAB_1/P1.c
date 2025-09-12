#include <stdio.h>

int main()
{
    int p, r, t;
    printf("Enter principal :");
    scanf("%d", &p);
    printf("Enter rate :");
    scanf("%d", &r);
    printf("Enter tenure :");
    scanf("%d", &t);
    printf("Your simple intrest is %.2f", (p * r * t) / 100.0);
    return 0;
}
