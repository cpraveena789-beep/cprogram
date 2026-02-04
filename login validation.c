#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];

    scanf("%s", username);
    scanf("%s", password);

    if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0)
        printf("Login successful");
    else
        printf("Login failed");

    return 0;
}
