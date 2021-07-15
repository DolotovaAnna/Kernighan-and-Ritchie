#include <stdio.h>

#define MAXLINE 100
int getline (char line[], int lim);
int reverse(char line[]);
int MyStrlen (char line[]);

int main()
{
	int len = 0;
    char line[MAXLINE];
    while ((len = getline(line, MAXLINE)) > 0)
    {
    	reverse (line);
    	printf ("%s\n\n", line);
    }

}

// Reads the line by symbol and returns its size.
int getline (char line[], int lim)
{
    int i, c;
    for (i = 0; i < lim - 1 && (c = getchar())!= EOF && c != '\n'; ++i)
    {
        line[i] = c;
    }
    line[i] = '\0';
    return i;
}

int MyStrlen (char line[])
{
    int i;
    i = 0;
    while (line[i] != '\0')
    {
        ++i;
    }

    return i;
}

int reverse(char line[])
{ 
	int j = 0;
	int temp = 0;
	int len = MyStrlen (line);
	for (int i = len - 1; i >= len / 2; --i)
	{
		temp = line[i];
		line[i] = line[j];
		line[j] = temp;
		++j;
	}
}