#include <stdio.h>
#include <string.h>

void reverse(char str[], int len);

int main()
{
    int len = 0;
    char str[50];
    printf("Enter your string: ");
    // fgets(str, 50, stdin);
    scanf("%[^\n]", str); 

    printf("You entered string: %s\n", str);
    len = strlen(str);
    //printf("Len of string: %ld\n", strlen(str));
    printf("Reversed string:");
    reverse(str, len);
    printf("\n");
    return 0;
}

void reverse(char str[], int len)
{
    int i = len - 1;
    while (i >= 0)
    {
        while (i >= 0 && str[i] == ' ')
            i--;

        if (i < 0)
            break;

        int j = i;
        while (j >= 0 && str[j] != ' ')
            j--;

        for (int k = j + 1; k <= i; k++)
            printf("%c", str[k]);

        if (j >= 0)
            printf(" ");

        i = j - 1;
    }
}
