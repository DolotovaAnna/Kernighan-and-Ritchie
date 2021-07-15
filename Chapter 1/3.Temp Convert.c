#include <stdio.h>

main()
{
    printf ("Farengheit  Celsius\n");
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr-32) /  9;
        printf ("%10d %8d\n", celsius, fahr);
        fahr = fahr + step;
    }
}
