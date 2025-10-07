#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int user_number, count = 0;
    srand(time(0));
    int random_number = rand() % 100 + 1;

    printf("Guess the lucky number from 1 to 100 : ");
    for (;;){
        count++;
        scanf("%d", &user_number);

        if(user_number > 100 || user_number<1){
            printf("Out of range! please enter from 1 to 100\n");
        }
        else if(user_number == random_number){
            printf("CONGRATULATION ! You succesfully guess the number %d "
            "in %d number of attempts", random_number, count);
            break;
        }
        else{
        user_number > random_number? 
        printf("Number is high, enter lower number\n"): 
        printf("Number is low, enter higher number\n");
        }
    }
    
    return 0;
}