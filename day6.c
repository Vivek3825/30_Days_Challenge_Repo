#include <stdio.h>

void subArray(int arr[], int size);

int main()
{
    int size = 0;
    printf("\nEnter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("\nPlease enter your array\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Your array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }

    printf("\nSubarrays are: ");
    subArray(arr, size);
    printf("\n");

    return 0;
}

void subArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = 0;
        for (int j = i; j < size; j++)
        {
            sum = sum + arr[j];
            if (sum == 0)
            {
                printf("(%d, %d), ", i, j);
            }
        }
    }
}
