#include <stdio.h>

main()
{
    int c, new_line, tab, backspace;
    new_line = 0;
    tab = 0;
    backspace = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++new_line;
        }
        if (c == '\t')
        {
            ++tab;
        }
        if (c == '\b')
        {
            ++backspace;
        }
    }
    printf ("\nIn your input:\n");
    printf ("New lines: %d\nTab: %d\nBackspace: %d\n", new_line, tab, backspace);

    return 0;
}
