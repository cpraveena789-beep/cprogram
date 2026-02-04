#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int prices[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int key;
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (prices[i] == key) {
            printf("Price found");
            return 0;
        }
    }

    printf("Price not found");
    return 0;
}
