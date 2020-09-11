#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(long num) {
    char buf[1000];

    long len = snprintf(buf, 1000, "%lu", num);

    for (long i = 0; i < len / 2; ++i) {
        if (buf[i] != buf[len - 1 - i])
            return false;
    }
    
    return true;
}

int main(int argc, char *argv[]) {
    long a, b;
    long largest_palindrome = 0;

    for (a = 100; a < 1000; a++) {
        for (b = 100; b < 1000; b++) {
            long c = a * b;
            if (is_palindrome(c)) {
                if (largest_palindrome < c) {
                    largest_palindrome = c;
                }
            }
        }
    }

    printf("Largest palindrome: %lu\n", largest_palindrome);
    return EXIT_SUCCESS;
}
