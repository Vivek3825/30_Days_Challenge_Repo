#include <stdio.h>

long long Factor(long long l);

int main()
{
    long long n;
    printf("Enter value of N: ");
    scanf("%lld", &n);
    printf("N: %lld\n", Factor(n));
    return 0;
}

long long Factor(long long l)
{
    int i = 1;
    int count = 0;
    while (i * i <= l)
    {
        if (l % i == 0)
        {
            if (i * i == l)
            {
                count++;
            }
            else
            {
                count += 2;
            }
        }
        i++;
    }

    return count;
}
