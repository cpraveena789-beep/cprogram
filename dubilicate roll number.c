#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int roll[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &roll[i]);
    }

    int found = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (roll[i] == roll[j]) {
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (found)
        printf("Duplicate found");
    else
        printf("No duplicate");

    return 0;
}
