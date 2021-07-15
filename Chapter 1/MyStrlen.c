#include <stdio.h>
#include <assert.h>

int MyStrlen (char line[]);

int main ()
{
    char problem[] = "crash everything";
    int length = MyStrlen (problem);
    assert (length == strlen(problem));

    return 0;
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
