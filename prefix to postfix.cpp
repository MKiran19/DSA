#include <ctype.h>
#include<stdio.h>
#include<conio.h>
#define SIZE 50
char s[SIZE];
int top = -1;
push(char elem)
{
    s[++top] = elem;
}
char pop()
{
    return (s[top--]);
}
int pr(char elem)
{
    switch (elem)
    {
        case '#':
        return 0;
        case '(':
        return 1;
        case '+':
        case '-':
        return 2;
        case '*':
        case '/':
        return 3;
    }
}
int main()
{
    char infx[50], pofx[50], ch, elem;
    int i = 0, k = 0;
    printf("Read the Infix Expression ? ");
    scanf("%s", infx);
    push('#');
    while ((ch = infx[i++]) != ' ')
    {
        if (ch == '(')
        push(ch);
        else if (isalnum(ch))
        pofx[k++] = ch;
        else if (ch == ')')
        {
            while (s[top] != '(')
            pofx[k++] = pop();
            elem = pop();
        }
        else
        {
            /* Operator */
            while (pr(s[top]) >= pr(ch))
            pofx[k++] = pop();
            push(ch);
        }
    }
    while (s[top] != '#') /* Pop from stack till empty */
    pofx[k++] = pop();
    pofx[k] = ' '; /* Make pofx as valid string */
    printf("\n\nGiven Infix Expn: %s Postfix Expn: %s", infx, pofx);
    getch();
}
