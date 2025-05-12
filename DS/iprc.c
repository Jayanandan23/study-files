#include <stdio.h>
#include <ctype.h>
#include <string.h>  // Needed for strlen
#define MAX 100

typedef struct
{
    char items[MAX];
    int top;
} stack;

void initStack(stack *s)
{
    s->top = -1;
}

void push(stack *s, char c)
{
    s->items[++s->top] = c;
}

char pop(stack *s)
{
    return s->items[s->top--];
}

char peek(stack *s)
{
    return s->items[s->top];
}

int precedence(char op)
{
    switch (op)
    {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

void reverse(char *str)
{
    int i, len = strlen(str);
    for (i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

void infixtoprefix(char *infix, char *prefix)
{
    stack s;
    initStack(&s);
    int i, j = 0;

    reverse(infix);

    for (i = 0; infix[i] != '\0'; i++)
    {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    for (i = 0; infix[i] != '\0'; i++)
    {
        if (isalnum(infix[i]))
        {
            prefix[j++] = infix[i];
        }
        else if (infix[i] == '(')
        {
            push(&s, infix[i]);
        }
        else if (infix[i] == ')')
        {
            while (peek(&s) != '(')
            {
                prefix[j++] = pop(&s);
            }
            pop(&s);
        }
        else
        {
            while (s.top != -1 && precedence(peek(&s)) > precedence(infix[i]))
            {
                prefix[j++] = pop(&s);
            }
            push(&s, infix[i]);
        }
    }

    while (s.top != -1)
    {
        prefix[j++] = pop(&s);
    }

    prefix[j] = '\0';
    reverse(prefix);
}

int main()
{
    char infix[MAX], prefix[MAX];
    printf("Enter the Infix Expression: ");
    scanf("%s", infix);
    infixtoprefix(infix, prefix);
    printf("Prefix Expression: %s\n", prefix);
    return 0;
}

		
























