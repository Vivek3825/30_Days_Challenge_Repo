#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 10000

typedef struct
{
    char data[MAX];
    int top;
} stack;

void init(stack *a);
bool Empty(stack *a);
bool push(stack *a, char c);
char pop(stack *a);
char peek(stack *a);
bool check(char *a);

int main()
{
    char *str[] = {"()", "([)]", "[{()}]", "", "{[}"};
    int n = sizeof(str) / sizeof(str[0]);

    for (int i = 0; i < n; i++)
    {
        printf("Input: %s -> %s\n",
               str[i],
               check(str[i]) ? "true" : "false");
    }

    return 0;
}

void init(stack *a)
{
    a->top = -1;
}

bool Empty(stack *b)
{
    return b->top == -1;
}

bool push(stack *c, char ch)
{
    if (c->top == MAX - 1)
        return false;
    c->data[++(c->top)] = ch;
    return true;
}

char pop(stack *d)
{
    if (Empty(d))
        return '\0';
    return d->data[(d->top)--];
}

char peek(stack *e)
{
    if (Empty(e))
        return '\0';
    return e->data[e->top];
}

bool check(char *s)
{
    stack stack1;
    init(&stack1);
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[')
        {
            push(&stack1, c);
        }
        else
        {
            char top = peek(&stack1);
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '['))
            {
                pop(&stack1);
            }
            else
            {
                return false;
            }
        }
    }
    return Empty(&stack1);
}
