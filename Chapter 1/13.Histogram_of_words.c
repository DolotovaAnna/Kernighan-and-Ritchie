#include <stdio.h>

#define OUT 0
#define IN  1

main()
{
    int c, i, word_size, state, max_len, max_nwords;
    state = OUT;
    word_size = 0;
    max_len = 0;
    max_nwords = 0;

    int nwords[20];
    for (i = 0; i < 20; ++i)
    {
        nwords[i]= 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN)
            {
                state = OUT;
                ++nwords[word_size % 20];
                if (word_size > max_len)
                {
                    max_len = word_size;
                }
                word_size = 0;
            }
        }
        else
        {
            state = IN;
            ++word_size;

        }
    }
    for (i = max_len + 1; i > 0; --i)
    {
        printf ("%2d ", i);
        for (int j =  nwords[i]; j > 0; --j)
        {
            printf ("--");
        }
        if (nwords[i] > max_nwords)
        {
            max_nwords = nwords[i];
        }
        putchar('\n');
    }
    printf ("   ");
    for (i = 1; i <= max_nwords + 1; ++i)
    {
        printf(" %d", i);
    }
    return 0;
}
