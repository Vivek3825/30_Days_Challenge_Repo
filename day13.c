#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool palindrome(char *s, int l, int r);
void longest(char *s, char *rt);

int main()
{
    char s1[] = "babad";
    char s2[] = "cbbd";
    char r[1000];

    longest(s1, r);
    printf("Input is: %s\nOutput: %s\n\n", s1, r);

    longest(s2, r);
    printf("Input is: %s\nOutput: %s\n", s2, r);

    return 0;
}

bool palindrome(char *s, int l, int r)
{
    while (l < r)
    {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
}

void longest(char *s, char *rt)
{
    int n = strlen(s);
    int max = 1, start = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (palindrome(s, i, j) && (j - i + 1 > max))
            {
                start = i;
                max = j - i + 1;
            }
        }
    }

    strncpy(rt, s + start, max);
    rt[max] = '\0';
}
