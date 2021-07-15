#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverse(char line[]);
void itos (int n, char s[], int span);

int main()
{
    char s[300];
    int n = 128;
    itos(n, s, 6);
    
    printf ("%s", s);

    return 0;
}

void itos (int n, char s[], int span)
{
    int i, sign;
    sign = n;
    i = 0;
    do {
        s[i++] = abs(n % 10) + '0'; 
    } while ((n /= 10) != 0);
    if (sign < 0)
    {
        s[i++] = '-';
    }
    s[i] = '\0';
    int len = strlen (s);
    while (len < span)
    {
        s[i++] = '*';
        len++;
    }
    reverse(s);
}

int reverse(char line[])
{ 
    int j = 0;
    int temp = 0;
    int len = strlen (line);
    for (int i = len - 1; i >= len / 2; --i)
    {
        temp = line[i];
        line[i] = line[j];
        line[j] = temp;
        ++j;
    }
}