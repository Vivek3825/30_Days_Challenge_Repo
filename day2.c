#include <stdio.h>

int input(int arr[], int size);
int missingValue(int size, int sum);

int main()
{
    int size = 0;
    int sum = 0;
    printf("\nEnter the size of array, Please consider missing element in size (Full range of element) : ");
    scanf("%d", &size);
    int arr[size-1];
    sum = input(arr, size-1);
    printf("\nmissing value is : %d\n\n", missingValue(size, sum));
    return 0;
}

int input(int arr[], int size)
{
    int sum = 0;
    printf("\nPlease enter your array\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    return sum;
}

int missingValue(int size, int sum)
{
    int missValue = size * (size + 1) / 2;
    return missValue - sum;
}
