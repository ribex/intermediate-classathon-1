#include <stdio.h>
#include <cs50.h>

int sumPrimes(int max);

int main(void)
{
    return sumPrimes(10);
}

int sumPrimes(int max)
{
    // initialize the sum outside of loops
    int primeSum = 0;

    // check each number up to and including the max
    for (int num = 1; num <= max; num++)
    {
        // initialize the isPrime as true
        bool isPrime = true;

        // check each integer up to but not including the current number to see if it is divisible evenly
        for (int j = 2; j < num; j++)
        {
            if (num % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            primeSum += num;
        }
    }
    // printf("%i\n", primeSum);
    return primeSum;
}