#include <stdio.h>

int main(){
    int s,m,h;
    printf("Enter time (hr min sec) : ");
    scanf("%d:%d:%d", &h,&m,&s);
    printf("Total seconds is %d", (h*3600) + (m*60) + s);
    return 0;

}