#include <stdio.h>

int main() {
    int ch;
    printf("Enter number to choose your language\n");
    printf("if 1 for English\n");
    printf("if 2 for Tamil\n");
    printf("if 3 for Hindi\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
             printf("You have chosen English");
             break;
        case 2:
             printf("You have chosen Tamil");
             break;
        case 3:
             printf("You have chosen Hindi");
             break;
        default:
        printf("Invalid chocie");
    } 
    return 0;
}