#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool is_prime(long num) {
    if (num <= 1) return false;

    for (long i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main(int argc, char *argv[]) {
    long sum = 0;
    long max = 2000000;

    for (long i = 0; i < max; ++i) {
        if (is_prime(i)) {
            sum += i;
        }
    }

    printf("Sum is %lu\n", sum);

    return EXIT_SUCCESS;
}
