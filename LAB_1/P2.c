#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, marks;
    printf("Enter first subject marks : ");
    scanf("%d", &m1);
    printf("Enter second subject marks : ");
    scanf("%d", &m2);
    printf("Enter third subject marks : ");
    scanf("%d", &m3);
    printf("Enter fourth subject marks : ");
    scanf("%d", &m4);
    printf("Enter fifth subject marks : ");
    scanf("%d", &m5);

    marks = m1 + m2 + m3 + m4 + m5;

    printf("Your total marks is %d and percentage is %.2f", marks, (float)marks / 5);
    return 0;
}