#include <stdio.h>

#define MAXLINE 10

int getline (char line[], int lim);
void copy (char to[], char from[]);

int main()
{
    int len = 0;
    int size = 0;
    int max = 0;
    char temp[MAXLINE];
    char line [MAXLINE];
    char longest[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len == MAXLINE - 1)
        {
            copy (temp, line);
            while (len == MAXLINE - 1)
            {
                size += len;
                len = getline(line, MAXLINE);
            }
        }

        size += len;

        if (size > max)
        {
            max = size;
            if (size >= MAXLINE - 1)
            {
                copy(longest, temp);
            }
            else
            {
                copy(longest, line);
            }
        }

        size = 0;
    }
    if (max > 0)
    {
        printf ("\n\"%s\"", longest);
    }
    return 0;
}

// Reads the line by symbol and returns its size.
int getline (char line[], int lim)
{
    int i, c;
    for (i = 0; i < lim - 1 && (c = getchar())!= EOF && c != '\n'; ++i)
    {
        line[i] = c;
    }
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

// Copies the line by symbol. To bigger than from.
void copy (char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i])!= '\0')
    {
        ++i;
    }

    return;
}