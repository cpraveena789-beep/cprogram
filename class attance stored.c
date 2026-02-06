#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int found = 0;

    printf("Enter number of students: \n");
    scanf("%d", &n);

    printf("Enter roll numbers: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("First repeating roll number is %d", arr[i]);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
    {
        printf("No duplicate roll number found");
    }

    return 0;
}
