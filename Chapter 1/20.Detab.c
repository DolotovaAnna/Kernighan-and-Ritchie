#include <stdio.h>

#define TABSIZE  8
int place = 0;
void detab();

int main()
{
	int c;
    while ((c = getchar()) != EOF)
    {
    	if (c == '\t')
    	{
    		detab();
    	}
    	else
    	{
    		++place;
    		putchar(c);
    	}
    	if (c == '\n')
    	{
    		place = 0;
    	}
    }
    return 0;
}

void detab()
{
	int b = TABSIZE - (place % TABSIZE);
    for (int i = 0; i < b; ++i)
	{
		putchar(' ');
	}
	place = place + b;
}