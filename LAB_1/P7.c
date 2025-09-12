#include <stdio.h>

int main()
{
    int b, h;

    printf("Program to calculate area of triangle\n");
    printf("Enter length of base : ", b);
    scanf("%d", &b);
    printf("Enter length of height : ", h);
    scanf("%d", &h);
    printf("Total area of triangle is : %.2f", (b * h) / 2.0);

    return 0;
}