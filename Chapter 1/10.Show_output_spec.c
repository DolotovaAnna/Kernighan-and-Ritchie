#include <stdio.h>

main()
{
    int c, new_line, tab, backspace;
    new_line = 0;
    tab = 0;
    backspace = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            printf ("\\t");
        }
        if (c == '\b')
        {
            printf ("\\b");
        }
        if (c == '\\')
        {
            printf ("\\\\");
        }
    }
    return 0;
}
