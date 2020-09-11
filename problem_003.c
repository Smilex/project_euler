#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    long max = 600851475143;
    long new_max = max;
    long largest_factor = 0;
    long i = 2;

    while (i * i < new_max) {
        if (new_max % i == 0) {
            new_max = new_max / i;
            printf("new_max: %lu, i: %lu\n", new_max, i);
            largest_factor = i;
        } else {
            ++i;
        }
    }
    if (new_max > largest_factor) {
        largest_factor = new_max;
    }

    printf("Largest prime is %lu\n", largest_factor);
    
    return EXIT_SUCCESS;
}
