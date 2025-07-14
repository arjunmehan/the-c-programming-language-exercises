#include <stdio.h>

int main()
{
    int c, pc;

    pc = getchar();
    putchar(pc);
    c = 0;
    while ((c = getchar()) != EOF)
    {
        if (!(c == ' ' && pc == ' '))
            putchar(c);
        pc = c;
    }
}