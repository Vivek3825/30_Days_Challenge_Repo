#include <stdio.h>

void input(int arr[], int size);
int print(int arr[], int size);
int sort(int arr1[], int arr2[], int size1, int size2);

int main()
{
    int size1;
    int size2;
    printf("\nEnter the size of array1 : ");
    scanf("%d", &size1);
    printf("\nEnter the size of array2 : ");
    scanf("%d", &size2);
    int arr1[size1];
    int arr2[size2];
    printf("\nPlease enter your 1st array\n\n");
    input(arr1, size1);
    printf("\nPlease enter your 2nd array\n\n");
    input(arr2, size2);

    sort(arr1, arr2, size1, size2);

    printf("\n1st array: ");
    print(arr1, size1);
    printf("\n2nd array: ");
    print(arr2, size2);
    printf("\n");
    return 0;
}

void input(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}

int sort(int arr1[], int arr2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for(int j =i; j<size1; j++)
        {
            if (arr1[i]>arr1[j])
            {
                arr1[i] = arr1[i]+arr1[j];
                arr1[j] = arr1[i]-arr1[j];
                arr1[i] = arr1[i]-arr1[j];
            }
        }
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] > arr2[j])
            {
                arr1[i] = arr1[i] + arr2[j];
                arr2[j] = arr1[i] - arr2[j];
                arr1[i] = arr1[i] - arr2[j];
            }
        }
    }

    for (int i = 0; i < size2; i++)
    {
        for (int j = i; j < size2; j++)
        {
            if (arr2[i] > arr2[j])
            {
                arr2[i] = arr2[i] + arr2[j];
                arr2[j] = arr2[i] - arr2[j];
                arr2[i] = arr2[i] - arr2[j];
            }
        }
    }
}
