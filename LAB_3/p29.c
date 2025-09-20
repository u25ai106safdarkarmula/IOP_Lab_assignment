#include <stdio.h>

int main(){
    int n,decimal,ispalindrome,count=0;
    printf("Enter value of n : ");
    scanf("%d", &n);

    int digit[100];
    decimal = n;
    for(int i=0;decimal != 0;i++){
        digit[i] = decimal%10;
        decimal /= 10;
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if(digit[i] != digit[count-i-1]){
            ispalindrome = 1;
            break;
        }
    }
    if(ispalindrome){
        printf("Number is not palindrome");
    }
    else{
        printf("Number is palindrome");
    }
    return 0;
}