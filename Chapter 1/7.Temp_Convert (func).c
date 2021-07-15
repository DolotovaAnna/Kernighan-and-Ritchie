#include <stdio.h>

int convert_temp (int fahr);

main()
{
    printf ("Farengheit  Celsius\n");
    int fahr;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr <= upper)
    {
        printf ("%10d %8d\n", fahr, convert_temp (fahr));
        fahr = fahr + step;
    }
}

int convert_temp (int fahr)
{
    int celsius = 5 * (fahr-32) /  9;

    return celsius;
}
