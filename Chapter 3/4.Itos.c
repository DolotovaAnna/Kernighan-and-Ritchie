#include <stdio.h>
#include <stdlib.h>

int MyStrlen (char line[]);
int reverse(char line[]);
void itos (int n, char s[]);

int main()
{
    char s[300];
    int n = -128;
    itos(n, s);
    
    printf ("%s", s);

    return 0;
}

void itos (int n, char s[])
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
    reverse(s);
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