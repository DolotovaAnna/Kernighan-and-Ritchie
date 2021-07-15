#include <stdio.h>
#include <assert.h>


void check_sequence();
void check_symbol();
void check_string();
void error_report(int error_code);

int line = 1;

enum errors 
{ 
	WRONG_SYMBOL = 1, 
	WRONG_STRING, 
	WRONG_SEQUENCE
};

int main()
{
	int c;
	int result;
	int num_brackets[6] = {};
	char brackets[6] = {'{', '(', '[', '}', ')', ']'};

	while ((c = getchar()) != EOF)
	{
		if (c == '\'')
		{
			check_symbol();

        }
        if (c == '\"')
        {
        	check_string();
        }
        for (int i = 0; i < 6; ++i)
        {
        	if (c == brackets[i])
        	{
        		++num_brackets[i];
        	}
        }
        if (c == '\n')
        {
        	++line;
        }
	}
	for (int i = 0; i < 3; ++i)
	{
		if (num_brackets[i] != num_brackets[i + 3])
		{
			printf("Error: check brackets. %d  %d \n", num_brackets[i], num_brackets[i + 3]);
			assert (0);

		}
	}
	printf("All ok.");
}

void check_sequence()
{
	int num_sequences = 11;
	char esc_seq[11] = {'\'', '\"', 't', 'n', '\\', 'b', 'f', 'v', 'r', 'a', '?'};
	
	int c = getchar();
	int num_matched = 0;
	for (int i = 0; i < num_sequences; ++ i)
	{
		if (c == esc_seq[i])
		{
			++num_matched;
		}
	}

	if (num_matched == 0)
	{
		error_report(WRONG_SEQUENCE);
	}
	
}
 
void check_symbol()
{
	int c = getchar();
	int result = 1;

	if (c == '\\')
	{
		check_sequence();
	}
	c = getchar();
	
	if ( c != '\'' )
	{
		error_report(WRONG_SYMBOL);
	}
}

void check_string()
{
	int c;
	while ((c = getchar()) != EOF && c != '\"'  && c != '\n')
	{ 
		if (c == '\\')
		{
			check_sequence();
		}

	}
	if (c !='\"')
	{
		error_report(WRONG_STRING);
	}
}

void error_report(int error_code)
{
	if (error_code == WRONG_STRING)
	{
		printf ("You have wrong string in line %d. \n", line);
	}
	else if (error_code == WRONG_SYMBOL)
	{
		printf ("You have wrong symbol constant in line %d. \n", line);
	}
	else if (error_code == WRONG_SEQUENCE)
	{
		printf ("You have wrong escape sequence in line %d. \n", line);
	}

	assert (0);
}