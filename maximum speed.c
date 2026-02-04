#include <stdio.h>

int main() {
    int speed;
    int maxSpeed = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d", &speed);
        if (speed > maxSpeed) {
            maxSpeed = speed;
        }
    }
    printf("Maximum speed = %d", maxSpeed);
    return 0;
}
