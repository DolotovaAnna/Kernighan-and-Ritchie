#include <stdio.h>
#include <ctype.h>

enum special_values
{
	START  = -1,
	FINISH =  1
};

int insert_sequence(char s2[], int pos, int prev, int next);
void expand (char s1[], char s2[]);

int main()
{
	char s1[] = "-0a-ef1234-91-0ghi-7-";
	char s2[300];
	
	expand(s1, s2);
	
	printf ("%s", s2);

	return 0;
}

void expand (char s1[], char s2[])
{
	int i = 0;
	int j = 0;
	int prev = 0;
	int next = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == '-')
		{
			prev = (i == 0) ? START : s1[i - 1];
			next = (s1[i + 1] == '\0') ? FINISH : s1[i + 1];
			if (prev == START || next == FINISH)
			{
				s2[j++] = s1[i++];
			}
			else
			{
				j = insert_sequence(s2, j, prev, next);
				i += 2;
			}
		}
		else if (s1[i + 1] != '-')
		{
			s2[j++] = s1[i++];
		}
		else
		{
			i++;
		}
	}

	s2[j] = '\0';
}

int insert_sequence(char s2[], int pos, int prev, int next)
{
	if ((isdigit(prev) && isalpha(next)) || 
		(isdigit(next) && isalpha(prev)) ||
		(islower(prev) && isupper(next)) ||
		(islower(next) && isupper(prev)))
	{
		s2[pos++] = prev;
		s2[pos++] = '-';
		s2[pos++] = next;
	}
	else
	{
		int step = (prev <= next) ? 1 : -1;
		while (prev != next)
		{
			s2[pos++] = prev;
			prev += step;
		}
		s2[pos++] = next;
	}

	return pos;
}
