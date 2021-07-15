#include <stdio.h>

#define MAXLINE 81

int getline (char line[], int lim);
void copy (char to[], char from[]);

int main()
{
    int len = 0;
    char line [MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len >= MAXLINE - 1)
        {
             while (len == MAXLINE - 1)
             {
                printf ("%s", line);
                len = getline(line, MAXLINE);

             }
             printf ("%s", line);
        } 
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