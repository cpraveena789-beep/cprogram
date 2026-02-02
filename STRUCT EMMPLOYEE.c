#include <stdio.h>

struct Employee {
    int id;
    float salary;
};

int main() {
    struct Employee e[3];
    int i;
    for (i = 0; i < 3; i++) {
        printf("Enter details of Employee %d\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &e[i].id);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }
    printf("\n--- Employee Details ---\n");
    for (i = 0; i < 3; i++) {
        printf("Employee %d ID: %d\n", i + 1, e[i].id);
        printf("Salary: %.2f\n\n", e[i].salary);
    }

    return 0;
}
