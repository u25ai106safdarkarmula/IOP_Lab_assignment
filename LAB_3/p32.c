#include <stdio.h>

int main()
{
    int n, max, sec_max;
    int num[100];
    printf("Enter total numbers : ");
    scanf("%d", &n);
    printf("Enter the numbers\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    if (num[0] > num[1]){
        max = num[0];
        sec_max = num[1];
    }
    else{
        max = num[1];
        sec_max = num[0];
    }
    for (int j = 0; j < n; j++){
        if (num[j] > max)
        {
            max = num[j];
        }
    }
    for (int k = 0; k < n; k++){
        if (num[k] != max)
        {
            if (num[k] > sec_max)
            {
                sec_max = num[k];
            }
        }
    }

    printf("Maximum of all number is %d\n", max);
    printf("Second maximum of all number is %d\n", sec_max);
    return 0;
}