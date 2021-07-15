#include <stdio.h>

unsigned int rightrot (unsigned int х, int n);

int main()
{
	int a = 180;
	unsigned int result = rightrot (a, 3);
	
	printf ("%u", result);

	return 0;
}

unsigned int rightrot (unsigned int x, int n)
{
	unsigned int y = x;
	y = y << (sizeof(unsigned int) * 8 - n);
	
	x = x >> n;
	x = x | y;
	
	return x;
}