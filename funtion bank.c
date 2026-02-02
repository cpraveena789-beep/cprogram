#include <stdio.h>

float balance = 30000.00;
int password = 123456;

void showBalance();
void translation();

int main() {
    int e,choice = 0,i=3;
    while(i>0){
    printf("Please enter your PIN: ");
    scanf("%d", &e);

    if (e == password) {

        while (choice != 3) {
            printf("\n1. Check Balance\n");
            printf("2. Transfer Money\n");
            printf("3. Exit\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            if (choice == 1) {
                showBalance();
            }
            else if (choice == 2) {
                translation();
            }
            else if (choice == 3) {
                printf("Exiting.\nThank you!\n");
            }
            else {
                printf("Invalid choice. Try again.\n");
            }
        }
        break;
    }
         else{
            i--;
            printf("Incorrect Password.Time left: %d.\n",i);
        }
    }
    if(i==0){
        printf("Try next time.\n");
    }
    
    return 0;
}


void showBalance() {
    printf("Current Balance: %.2f\n", balance);
}

void translation() {
    float a;
    printf("\nEnter amount to transfer: ");
    scanf("%f", &a);

    if (a > balance) {
        printf("Transaction Failed. Insufficient balance.\n");
    }
    else if (a <= 0) {
        printf("Transaction Failed. Invalid amount.\n");
    }
    else {
        balance = balance - a;
        printf("Transaction Successful! %.2f transferred.\n", a);
    }
}
