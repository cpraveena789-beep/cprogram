#include <stdio.h>
int main()
{
    int n, key, found = 0;
    int prices[100];
    printf("Enter number of products: \n");
    scanf("%d", &n);
    printf("Enter product prices: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &prices[i]);
    }
    printf("Enter price to search: \n");
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
    {
        if (prices[i] == key)
        {
            found = 1;
            break;
        }
    }
    if (found)
        printf("Price available\n");
    else
        printf("Price not available\n");

    return 0;
}
