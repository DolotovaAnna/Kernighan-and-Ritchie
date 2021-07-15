#include <stdio.h>

int binsearch(int x, int v[], int n);

int main()
{
    int x = 100;
    int array[] = {1, 2, 3, 4, 5, 6, 8, 9, 10};
    int result = binsearch(x, array, 8);

    printf ("%d", result);

    return 0;
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1 ;
    while (low <= high && x != v[mid])
    {
        mid = (low + high) / 2;
        if (x < v[mid])
        {
            high = mid - 1;
        }
        else if (x > v[mid])
        {
            low = mid + 1 ;
        }
    }

    if (x == v[mid])
    {
        return mid;
    }
    else
    {
        return -1;
    }
 }