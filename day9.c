#include <stdio.h>
#include <string.h>

int LongPrefix(char *str[], int n, char p[]);

int main()
{
    char *str[] = {"alone", "\n"};
    // printf("%s", str[1]);
    int n = 1;
    char prefix[200];
    LongPrefix(str, n, prefix);

    printf("Longest common prefix is: \"%s\"\n", prefix);
    return 0;
}

int LongPrefix(char *str[], int n, char p[])
{
    int k = 0;

    for (int i = 0; i < strlen(str[0]); i++)
    {
        char ch = str[0][i];

        int match = 1;
        for (int j = 1; j < n; j++)
        {
            if (str[j][i] == '\0' || str[j][i] != ch)
            {
                match = 0;
                break;
            }
        }
        if (match)
            p[k++] = ch;
        else
            break;
    }
    p[k] = '\0';
}
