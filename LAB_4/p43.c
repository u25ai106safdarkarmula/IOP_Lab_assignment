#include <stdio.h>

int main(){
    int sales; float cmsn;
    printf("Enter total sales : ");
    scanf("%d", &sales);

    if(sales <= 500){
        cmsn = (5*sales)/100.0;
    }
    else if(sales <= 2000 && sales > 500){
        cmsn = (10*(sales-500))/100.0 + 35;
    }
    else if(sales <= 5000 && sales > 2000){
        cmsn = (12*(sales-2000))/100.0 + 185;
    }
    else if(sales >= 5000){
        cmsn = (12.5*sales)/100.0;
    }
    printf("Commision on sales is %.2f", cmsn);
    return 0;
}