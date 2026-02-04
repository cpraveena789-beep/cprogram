#include <stdio.h>

int main() {
    int n;
    int count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        count++;
    }

    printf("Students present = %d", count);

    return 0;
}
