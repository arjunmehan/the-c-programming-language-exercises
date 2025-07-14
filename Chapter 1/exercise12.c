#include <stdio.h>

int main()
{
    int c, pc;
    pc = getchar();
    putchar(pc);
    c = 0;
    while ((c = getchar()) != EOF)
    {
        if ((pc != '\n' && pc != ' ' && pc != '\t') && (c == '\n' || c == ' ' || c == '\t'))
            putchar('\n');
        else if (c == '\n' || c == ' ' || c == '\t')
            ;
        else
            putchar(c);
        pc = c;
    }

    return 0;
}