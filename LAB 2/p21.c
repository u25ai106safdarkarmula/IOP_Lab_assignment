#include <stdio.h>

int main()
{
    int a, b;
    char opr;
    printf("Enter specific operator : ");
    scanf("%c", &opr);
    printf("Enter two number : ");
    scanf("%d %d", &a, &b);

    switch (opr)
    {
    case 'a':
        printf("Answer is %d", a + b);
        break;
    case 's':
        printf("Answer is %d", a - b);
        break;
    case 'm':
        printf("Answer is %d", a * b);
        break;
    case 'd':
        switch (b)
        {
        case 0:
            printf("invalid input! you entered zero");
        }
        printf("Answer is %d", a / b);
        break;

    default:
        printf("invalid operator !");
        break;
    }

    return 0;
}