#include <stdio.h>

int main()
{
    int marks1, marks2, marks3, marks4, marks5, sum;
    float percent;
    char grade;
    printf("Enter first subject marks : ");
    scanf("%d", &marks1);
    printf("Enter second subject marks : ");
    scanf("%d", &marks2);
    printf("Enter third subject marks : ");
    scanf("%d", &marks3);
    printf("Enter fourth subject marks : ");
    scanf("%d", &marks4);
    printf("Enter fifth subject marks : ");
    scanf("%d", &marks5);

    sum = marks1 + marks2 + marks3 + marks4 + marks5;
    percent = sum / 5.0;

    if (percent >= 35)
    {

        if (percent >= 90)
            grade = 'A';
        else if (percent >= 80 && percent < 90)
            grade = 'B';
        else if (percent >= 65 && percent < 80)
            grade = 'C';
        else if (percent >= 50 && percent < 65)
            grade = 'D';
        else if (percent >= 35 && percent < 50)
            grade = 'E';
        printf("Your total marks is %d and percentage is %f and grade is %c", sum, percent, grade);
    }
    else if(percent < 35){
        printf("You fail, try again!");
    }
    
    return 0;
}