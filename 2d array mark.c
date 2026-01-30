#include <stdio.h>

int main() {
    int students, subjects;
    int marks[50][50];
    int i, j;
    int total;
    float average;

    printf("Enter number of students: ");
    scanf("%d", &students);

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    for (i = 0; i < students; i++) {
        printf("\nEnter marks for Student %d:\n", i + 1);
        for (j = 0; j < subjects; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (i = 0; i < students; i++) {
        total = 0;
        for (j = 0; j < subjects; j++) {
            total += marks[i][j];
        }
        average = (float) total / subjects;

        printf("\nStudent %d Total = %d", i + 1, total);
        printf("\nStudent %d Average = %.2f\n", i + 1, average);
    }

    return 0;
}