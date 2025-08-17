#include <stdio.h>

int Duplicate(int arr[], int size);

int main()
{
    int size = 0;
    printf("\nEnter the size of array, Please consider duplicate element in size (Full range of element): ");
    scanf("%d", &size);
    int arr[size];
    printf("\nPlease enter your array\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Duplicate number is: %d\n", Duplicate(arr, size));
    return 0;
}

int Duplicate(int arr[], int size)
{
    int s = arr[0];
    int f = arr[0];

    do
    {
        s = arr[s];
        f = arr[arr[f]];
    } while (s != f);

    s = arr[0];

    while (s != f)
    {
        s = arr[s];
        f = arr[f];
    }

    return f; 
}
#include <stdio.h>

int Duplicate(int arr[], int size);

int main()
{
    int size = 0;
    printf("\nEnter the size of array, Please consider duplicate element in size (Full range of element): ");
    scanf("%d", &size);
    int arr[size];
    printf("\nPlease enter your array\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Duplicate number is: %d\n", Duplicate(arr, size));
    return 0;
}

int Duplicate(int arr[], int size)
{
    int s = arr[0];
    int f = arr[0];

    do
    {
        s = arr[s];
        f = arr[arr[f]];
    } while (s != f);

    s = arr[0];

    while (s != f)
    {
        s = arr[s];
        f = arr[f];
    }

    return f; 
}
