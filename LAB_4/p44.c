#include <stdio.h>

int main(){
    int unit; float rate;
    printf("Enter total consumption in unit : ");
    scanf("%d", &unit);

    if(unit <= 200){
        rate = unit*0.5;
    }
    else if(unit <= 400 && unit >= 201){
        rate = (unit - 200)*0.65 + 100;
    }
    else if(unit <= 600 && unit >= 401){
        rate = (unit - 400)*0.80 + 230;
    }
    else if(unit > 600){
        rate = (unit - 600)*1.25 + 425;
    }
    printf("Total rate is %.2f", rate);
    return 0;
}