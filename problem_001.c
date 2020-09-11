#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int max = 1000;
    int sum = 0;
    int iter;

    for (iter = 1; iter < max; ++iter) {
        if (iter % 3 == 0 || iter % 5 == 0) {
            sum += iter;
        }
    }

    printf("Sum is: %d\n", sum);

    return EXIT_SUCCESS;
}
