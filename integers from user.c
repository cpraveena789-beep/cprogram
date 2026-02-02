#include <stdio.h>
void swap(int *a,int *b);
int main() {
    int x,y;
    printf("Enter any two number:\n");
    scanf("%d %d",&x,&y);
    printf("Before swaping:\n");
    printf("X=%d Y=%d\n",x,y);
    swap(&x,&y);
     printf("After swaping:\n");
    printf("X=%d Y=%d\n",x,y);
    

    return 0;
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}