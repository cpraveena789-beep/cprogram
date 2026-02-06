#include <stdio.h>
int linearSearch(int arr[], int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        return 1;
    }
}
int main() {
    int arr[]=(10,25,30,45,50)
    int n=5,key=30;
    int result=linearSearch(arr,n,key);
     if (result != -1)
    {
        printf("Element Found at index %d\n", result);
    }
    else
    {
        printf("Element Not Found\n");
    }
    return 0;
}