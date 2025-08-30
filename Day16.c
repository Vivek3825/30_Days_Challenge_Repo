#include <stdio.h>

long long GCD(long long a, long long b);
long long LCM(long long a, long long b);

int main()
{
    long long n, m;
    printf("Enter value of N: ");
    scanf("%lld", &n);
    printf("Enter value of M: ");
    scanf("%lld", &m);
    printf("LCM: %lld\n", LCM(n, m));
    return 0;
}

long long GCD(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long LCM(long long a, long long b)
{
    return (a / GCD(a, b)) * b;
}
