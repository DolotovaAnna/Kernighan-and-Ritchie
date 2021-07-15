#include <stdio.h>

int bitcount (unsigned x);

int main()
{
	int a = 100;
	int result = bitcount(a);
	
	printf ("%d", result);

	return 0;
}

int bitcount (unsigned x)
{
	int counter = 0;
	while (x != 0)
	{
		x &= (x - 1);
		++counter;
	}
	
	return counter;
}