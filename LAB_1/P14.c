#include <stdio.h>

int main(){
    char a; int ASCII_value;
    printf("Enter any character : ");
    scanf("%c", &a);
    ASCII_value = (int)a;

    if(ASCII_value >= 65 && ASCII_value<= 90){
        printf("%c is capital letter", a);
    }
    else if(ASCII_value >= 97 && ASCII_value<= 122){
        printf("%c is small case letter", a);
    }
    else if(ASCII_value >= 48 && ASCII_value<= 57){
        printf("%c is digit", a);
    }
    else{
        printf("%c is special symbol", a);
    }


    return 0;
}