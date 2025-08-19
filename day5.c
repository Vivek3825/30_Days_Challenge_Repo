#include <stdio.h>

int Leader(int arr[], int size);

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
    printf("\nLeader elements are: ");
    for (int i = Leader(arr, size); i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");

    return 0;
}

int Leader(int arr[], int size)
{
    int max = arr[size - 1];
    int j = size - 1;
    arr[j] = max;
    for (int i = (size - 2); i >= 0; i--)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            j--; 
            arr[j] = arr[i];
        }
    }
    return j;
}

