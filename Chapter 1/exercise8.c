#include <stdio.h>

int main()
{
    int c, nl, t, b;
    nl = 0;
    t = 0;
    b = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++t;
        if (c == ' ')
            ++b;
    }

    printf("Newlines: %d Tabs: %d Blanks: %d \n", nl, t, b);

    return 0;
}