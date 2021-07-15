#include <stdio.h>

unsigned int  invert (unsigned x, int p , int n);
unsigned int getbits (unsigned x, int p, int n);
unsigned int setbits (unsigned int x, int p, int n , unsigned int y);

int main()
{
	int a = 100;
	unsigned int result = invert(a, 5, 3);
	printf ("%u", result);
}
unsigned int invert (unsigned int x, int p , int n)
{
 	unsigned int y = x;
 	y = y >> (p - n + 1);
 	y = ~y;
 	
 	unsigned int result = setbits (x, p, n, y);
 	
 	return result;
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