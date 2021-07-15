#include <stdio.h>

unsigned int getbits (unsigned x, int p, int n);
unsigned int setbits (unsigned int x, int p, int n , unsigned int y);

int main()
{
	int a = 100;
	int b = 174;
	unsigned int result = setbits (a, 4, 3, b);
	printf ("%u", result);
}

unsigned int setbits (unsigned int x, int p, int n , unsigned int y)
{
	y = y & ~(~0 << n);

	unsigned int ending = getbits (x, p - n, p - n + 1);
	x = x >> (p + 1 - n);
	x = x & (~0 << n);
	x = x | y;
	x = x << (p + 1 -n);
	x = x | ending;
	return x;
}

unsigned int getbits (unsigned x, int p, int n)
{
	return (x >> (p + 1 -n ) & ~(~0 << n));
}