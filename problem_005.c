#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    long i;
    for (i = 1; ; ++i) {
        bool found = false;
        for (long j = 1; j <= 20; ++j) {
            if (i % j != 0) {
                found = true;
                break;
            }
        }
        if (!found) {
            break;
        }
    }

    printf("%lu is the smallest multiple\n", i);

    return EXIT_SUCCESS;
}
