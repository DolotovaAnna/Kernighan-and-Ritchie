#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int htol( char array[]);

int main()
{
	char number[4];
	int i = 0;
	int c;
	while ((c = getchar()) != '\n')
	{
		if (i == 0 && c != '0')
		{
			printf ("Your conctant should start with \"0X\" or \"0x\"\n");
			assert (0);
		}

		if (i == 1 && c != 'X' && c!= 'x')
		{
			printf ("Your conctant should start with \"0X\" or \"0x\"\n");
			assert (0);
		}

		number[i++] = c;
	}
	
	int result = htol(number);
	printf ("%d", result);

}

int htol(char array[])
{
	int n = 0;

	for (int i = 2; isdigit (array[i]) || array[i] >= 'A' && array[i] <= 'F'; ++i)
	{
		if (isdigit(array[i]) == 1)
		{
			array[i] -= '0';
		}
		else
		{
			array[i] -= 'A';
			array[i] += 10;
		}
		
		n = n * 16 + array[i];
	}

	return n;
}