#include <stdio.h>

int main(){

    int s = 31558150;

    printf("Total number of seconds taken by earth to complete a revolution is %.2d\n", s); 
    printf("Total number of minutes taken by earth to complete a revolution is %.2f\n", s/60.0);
    printf("Total number of hours taken by earth to complete a revolution is %.2f\n", s/3600.0);
    printf("Total number of days taken by earth to complete a revolution is %.2f\n", s/86400.0);

return 0;
}