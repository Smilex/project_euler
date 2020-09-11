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
    long num_of_primes = 0;
    long target_num_of_primes = 10001;
    long i;

    for (i = 0; ; i++) {
        if (is_prime(i)) {
            num_of_primes++;
            if (num_of_primes == target_num_of_primes) {
                break;
            }
        }
    }

    printf("The %luth prime number is %lu\n", target_num_of_primes, i);

    return EXIT_SUCCESS;
}
