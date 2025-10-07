#include <stdio.h>
#include <stdbool.h>

int main(){
    float circumference;
    printf("Enter your head circumference (in inches) : ");
    scanf("%f", &circumference);

    float hatranges[12][2] = {
        {20.5, 20.9},
        {21.0, 21.3},
        {21.4, 21.6},
        {21.7, 22.0},
        {22.1, 22.4},
        {22.5, 22.7},
        {22.8, 23.1},
        {23.2, 23.4},
        {23.5, 23.8},
        {23.9, 24.2},
        {24.3, 24.6},
        {24.7, 25.0}
    };
    
    char* hatsizes[] = {
        "6 1/2", "6 5/8", "6 3/4", "6 7/8",
        "7", "7 1/8", "7 1/4", "7 3/8",
        "7 1/2", "7 5/8", "7 3/4", "7 7/8"
    };

    bool found = false;
    for (int i = 0; i < 12; i++)
    {
        if(circumference >= hatranges[i][0] && circumference <= hatranges[i][1]){
            printf("Your hat size is %s", hatsizes[i]);
            found = true;
            break;
        }
    }

    if(!found){
        printf("SORRY, no hat size matches your measurement.");
    }
    
    return 0;
}