#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int temp[n];   
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}

