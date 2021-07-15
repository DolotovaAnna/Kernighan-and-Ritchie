#include <stdio.h>

#define MAXLINE 100
int getline (char line[], int lim);
int delete_spaces (char line[], int len);

int main()
{
    int len = 0;
    char line[MAXLINE];
    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > 1)
        {
            delete_spaces (line, len);
            printf ("\"%s\"\n", line);
        }
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
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

int delete_spaces (char line[], int len)
{   
    int i = len - 1;
    while (line[i] == '\t' || line[i] == ' ' || line[i] == '\n')
    {
        --i;
    }
    line[i + 1] = '\0';
}