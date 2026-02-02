#include <stdio.h>

int main() {
    int numbers[5]={0,1,2,3,4};
    int *point=numbers;
    for(int i=0;i<5;i++){
        printf("%d",point);
        point++;
    }
    return 0;
}