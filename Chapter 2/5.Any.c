#include <stdio.h>


int MAX_STR_LEN = 100;


int read_string (char string[], int max_len);

int any (char str_1[], char str_2[]);



int main()
{
	char str_1[MAX_STR_LEN];
	char str_2[MAX_STR_LEN];

	int c = 0;

	read_string (str_1, MAX_STR_LEN);
	read_string (str_2, MAX_STR_LEN);

	int result = any (str_1, str_2);

	printf ("First same symbols position: %d", result + 1);
}



int any (char str_1[], char str_2[])
{
	for (int i = 0; str_1[i] != '\0'; ++i)
	{
		for (int j = 0; str_2[j] != '\0'; ++j)
		{
			if (str_1[i] == str_2[j])
			{
				return i;
			}
		}
	}

	return -1;
}


int read_string (char string[], int max_len)
{
	int c = 0;
	int i = 0;

	for (i = 0; i < max_len && (c = getchar()) != '\n'; i++)
	{
		string[i] = c;
	}

	string[i] = '\0';

	return i;
}