#include <stdio.h>

#define max(a,b) ((a) > (b) ? (a) : (b))

int Water(int arr[], int n);

int main()
{
    int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", Water(arr, n));
    return 0;
}

int Water(int arr[], int n)
{

    int i = 0;
    int j = n - 1;
    int imax = 0;
    int jmax = 0;
    int ans = 0;

    while (i <= j)
    {
        imax = max(imax, arr[i]);
        jmax = max(jmax, arr[j]);

        if (imax < jmax)
        {
            ans += imax - arr[i];
            i++;
        }
        else
        {
            ans += jmax - arr[j];
            j--;
        }
    }
    return ans;
}
