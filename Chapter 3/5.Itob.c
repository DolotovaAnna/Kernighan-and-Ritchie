#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverse(char line[]);
void itob(int n, char s[], int b);

int main()
{
    char s[300];
    int n = -120;
    itob(n, s, 16);
    
    printf ("%s", s);

    return 0;
}

void itob(int n, char s[], int b)
{
    int i, sign, d;
    sign = n;
    i = 0;
    do {
    	d = abs(n % b);
        s[i++] =  (d < 9) ? d + '0' : d + 'A' - 10;
    } while ((n /= 10) != 0);
    if (sign < 0)
    {
        s[i++] = '-';
    }
    s[i] = '\0';
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