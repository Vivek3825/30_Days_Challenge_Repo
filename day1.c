
#include <stdio.h>

#define SIZE 8

void sort(int a[], int n);
void input(int a[]);

int main()
{
    int a[SIZE];

    input(a);

    int n = sizeof(a) / sizeof(a[0]);

    sort(a, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    return 0;
}

void input(int a[])
{
    printf("Array size should be eight elements\n");
    printf("Please enter your array\n\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &a[i]);
        if (a[i] == 0 || a[i] == 1 || a[i] == 2)
        {
            continue;
        }
        else
        {
            printf("\nYou entered wrong element, The element should be 0, 1, or 2\n");
            printf("Please enter this element again\n\n");
            i--;
        }
    }
}

void sort(int arr[], int n)
{
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else // arr[mid] == 2
        {
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
}
