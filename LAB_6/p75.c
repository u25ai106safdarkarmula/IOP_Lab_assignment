#include <stdio.h>

int main() {
    int marks[10][3];
    int total[10];
    int i, j;

    printf("Enter marks for 10 students (Subject1 Subject2 Subject3):\n");
    for(i = 0; i < 10; i++) {
        printf("Student %d: ", i+1);
        for(j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    for(i = 0; i < 10; i++) {
        total[i] = marks[i][0] + marks[i][1] + marks[i][2];
        printf("Total marks of Student %d: %d\n", i+1, total[i]);
    }

    for(i = 0; i < 3; i++) {
        int max = marks[0][i];
        int roll = 1;
        for(j = 1; j < 10; j++) {
            if(marks[j][i] > max) {
                max = marks[j][i];
                roll = j+1;
            }
        }
        printf("Highest marks in Subject %d: %d (Student %d)\n", i+1, max, roll);
    }

    int max_total = total[0];
    int top_student = 1;
    for(i = 1; i < 10; i++) {
        if(total[i] > max_total) {
            max_total = total[i];
            top_student = i+1;
        }
    }
    printf("Student with max total marks: Student %d (%d marks)\n", top_student, max_total);

    return 0;
}
