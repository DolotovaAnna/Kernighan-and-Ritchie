#include <stdio.h>
#include <string.h>

int read_string (char string[], int max_len);
void squeeze (char str_1[], char str_2[]);

int MAX_STR_LEN = 100;

int main()
{
    char str_1[MAX_STR_LEN];
    char str_2[MAX_STR_LEN];
    read_string (str_1, MAX_STR_LEN);
    read_string (str_2, MAX_STR_LEN); 
    
    squeeze (str_1, str_2);
    
    printf ("First string without symbols in second one:\n\"%s\"", str_1);

    return 0;
}


void squeeze (char str_1[], char str_2[])
{
    int len2 = strlen(str_2);
    int i = 0;
    int j = 0;
    int new_place = 0;
    
    while (str_1[i] != '\0')
    {
        while (str_2[j] != str_1[i] && str_2[j] != '\0' )
        {
            ++j;
        }
        
        if (j == len2)
        {
            str_1[new_place++] = str_1[i];
        }
        
        ++i;
        j = 0;
    }

    str_1[new_place] = '\0';
}

int read_string (char string[], int max_len)
{
    int c = 0;
    int i = 0;

    for (i = 0; i < max_len && (c = getchar()) != '\n'; i++)
    {
        string[i] = c;
    }

    string[i] = '\0';

    return i;
}