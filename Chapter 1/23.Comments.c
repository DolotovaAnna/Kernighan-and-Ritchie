#include <stdio.h>

#define OUT 0
#define IN  1
void delete_comments();

int main()
{
	int c, state;
	state = OUT;
    while ((c = getchar()) != EOF)
    {
    	if (c == '/' && state == OUT)
    	{
    		delete_comments();
    	}
    	else
    	{
    		if (c == '\"')
    		{
    			if (state == IN)
    			{
    				state = OUT;
    			}
    			else
    			{
    				state = IN;
    			}
    		}
    		putchar(c);
    	}
    }
}

void delete_comments()
{
	int current = getchar();
	int prev = 0;
    if (current == '/')
    {
    	while((current = getchar()) != '\n')
    	{

    	}
        putchar(current);
    }
    else if (current == '*')
    {
    	while(current != '/' || prev != '*')
    	{
    		prev = current;
    		current = getchar();
    	}
    }
    else
    {
        putchar('/');
        putchar(current);

    }
}