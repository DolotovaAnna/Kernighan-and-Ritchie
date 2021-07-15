#include <stdio.h>

#define TABSIZE  8
int place = 0;
void etab(int spaces);
void process_symbol(char c);

int main()
{
	int c;
    while ((c = getchar()) != EOF)
    {
        process_symbol(c);
    }

    return 0;
}

void etab(int spaces)
{
    int start = place / TABSIZE;
    int finish = (spaces + place) / TABSIZE;
    int tabs_to_print = finish - start;
    for (int i = 0; i < tabs_to_print; ++i)
        {
            putchar('\t');
        }
    int spaces_to_print = (place + spaces) - finish * TABSIZE;
    for (int i = 0; i < spaces_to_print; ++i)
    {
        putchar(' ');
    }
}

void process_symbol(char c)
{
    int spaces = 0;
    if (c != ' ' && c != '\n')
        {
            ++place;
            putchar(c);
        }
        else if (c == ' ')
        {
            int spaces = 0;
            while (c == ' ')
            {
                ++spaces;
                c = getchar();
            }
            etab(spaces);
            putchar(c); 
        }

        else
        {
            place = 0;
            putchar(c);
        }

}