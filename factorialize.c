// return a long long

#include <stdio.h>

long long factorialize(int num);

int main(void)
{
    return factorialize(5);
}

long long factorialize(int num) {

    long long factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    // printf("%lli\n", factorial);
    return factorial;
}
