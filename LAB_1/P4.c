#include <stdio.h>

int main(){

    float f;
    printf("Enter fahrenheit value : ");
    scanf("%f", &f);
    printf("Centigrade value is %.2f",((f-32)*5)/9.0);

    return 0;
}
