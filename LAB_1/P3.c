#include <stdio.h>

int main()
{
    int bs, HRA, DA, TA, PF, IT;
    printf("Enter basic salary : ");
    scanf("%d", &bs);

    HRA = (bs * 20) / 100;
    printf("HRA : %d\n", HRA);
    DA = (bs * 15) / 100;
    printf("XA : %d\n", DA);
    TA = (bs * 10) / 100;
    printf("TA : %d\n", TA);
    PF = (bs * 5) / 100;
    printf("PF : %d\n", PF);
    IT = (bs * 3) / 100;
    printf("IT : %d\n", IT);

    printf("Gross salary is %d : ", bs + HRA + DA + TA - PF - IT);

    return 0;
}