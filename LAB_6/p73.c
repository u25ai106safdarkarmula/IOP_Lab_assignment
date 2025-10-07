#include <stdio.h>

int main()
{
    int count[6] = {0}, n, vote;
    printf("Enter total number of votes : ");
    scanf("%d", &n);
    printf("Enter your vote (1 to 5)\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vote);
        switch (vote){
        case 1 : count[0]++; break;
        case 2 : count[1]++; break;
        case 3 : count[2]++; break;
        case 4 : count[3]++; break;
        case 5 : count[4]++; break;
        default : count[5]++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Number of votes to candidate %d is %d\n", i+1, count[i]);
    }
    int winner = 0;
    for (int i = 1; i < 5; i++) {
        if (count[i] > count[winner]) {
            winner = i;
        }
    }
    printf("Maximum vote is to candidate %d\n", winner+1);
    printf("Number of spoilt ballot is %d\n", count[5]);
    return 0;
}