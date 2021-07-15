#include <stdio.h>

#define n 10
int place = 0;
void line_break(char c);
int main()
{
	int c;
    while ((c = getchar()) != EOF)
    {
    	++place;
    	if (place > n)
        {
            line_break(c);
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}

void line_break(char c)
{
    place = 0;
    putchar('\n');
    while (c == ' ' || c == '\t')
    {
        ++place;
        c = getchar();
    }
    ++ place;
    putchar(c);
}