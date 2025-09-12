#include <stdio.h>

int main(){
    int tot_ses, hr, min, sec, rem_sec;

    printf("Enter total second : ");
    scanf("%d", &tot_ses);

    hr = tot_ses/3600;
    rem_sec = tot_ses % 3600;
    min = rem_sec/60;
    sec = rem_sec%60;

    printf("Time is %d:%d:%d", hr, min, sec);

    return 0;
}
