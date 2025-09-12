#include <stdio.h>

int main(){
    int CM,M,P,C,E;

    printf("Enter marks of Mathematics out of 200 : ");
    scanf("%d", &M);
    printf("Enter marks of Physics out of 200 : ");
    scanf("%d", &P);
    printf("Enter marks of Chemistry out of 200 : ");
    scanf("%d", &C);
    printf("Enter marks of Entrace examination out of 100 : ");
    scanf("%d", &E);

    printf("Cut of marks CM : %d", (M/2) + (P/2) + (C/2) + E);
    return 0;
}