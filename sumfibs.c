#include <stdio.h>

int sumFibs(int max);

int main(void)
{
    return sumFibs(10);
}

int sumFibs(int max) {

    int oddFibSum = 0;
    int prevFib = 0;
    int currFib = 1;
    int nextFib = 1;

    do
    {
        if (currFib % 2 != 0)
        {
            oddFibSum += currFib;
            // printf("oddFibSum = %i\n", oddFibSum);
        }
        prevFib = currFib;
        // printf("prevFib = %i\n", prevFib);

        currFib = nextFib;

        nextFib = currFib + prevFib;
        // printf("nextFib = %i\n", nextFib);

    } while (currFib < max);

    // printf("%i\n", oddFibSum);
    return oddFibSum;
}
