#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void permutation(char *str, int l, int r);
void swap(char *x, char *y);

int main() 
{
    char str[20];
    printf("Enter a string (No space): ");
    scanf("%s", str);

    int n = strlen(str);
    printf("All unique permutations are:\n");
    permutation(str, 0, n - 1);

    return 0;
}

void permutation(char *str, int a, int b) 
{
    if (a == b) 
    {
        printf("%s\n", str);
        return;
    }

    bool used[256] = {0}; 

    for (int i = a; i <= b; i++) 
    {
        if (used[(unsigned char)str[i]]) 
            continue;

        used[(unsigned char)str[i]] = true;

        swap(&str[a], &str[i]);         
        permutation(str, a + 1, b);         
        swap(&str[a], &str[i]);         
    }
}

void swap(char *x, char *y) 
{
    char t = *x;
    *x = *y;
    *y = t;
}
