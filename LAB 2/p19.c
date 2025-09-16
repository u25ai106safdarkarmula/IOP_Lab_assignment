#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character : ");
    scanf("%c", &ch);

    ch >= 'a' ? (ch <= 'z' ? printf("%c is lower case", ch):
    printf("%c is not lower case", ch)):
    printf("%c is not lower case", ch);
    return 0;
}