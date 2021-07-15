#include <stdio.h>

int lower (int c);

int main()
{
	int c;
	while ((c = getchar()) != EOF)
	{
		int result = lower(c);
		putchar (result);
	}
	return 0;

}

int lower (int symbol)
{
	int small_letter = (symbol >= 'A' && symbol <= 'Z') ? symbol + 'a' - 'A' : symbol;
	return small_letter;
}