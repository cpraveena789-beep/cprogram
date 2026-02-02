#include <stdio.h>

struct Recharge {
    long long mobile;
    float amount;
};

int main() {
    struct Recharge r;

    printf("Enter Mobile Number: ");
    scanf("%lld", &r.mobile);

    printf("Enter Recharge Amount: ");
    scanf("%f", &r.amount);

    printf("\n--- Recharge Details ---\n");
    printf("Mobile Number: %lld\n", r.mobile);
    printf("Recharge Amount: %.2f\n", r.amount);

    return 0;
}
