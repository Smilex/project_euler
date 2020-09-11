#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    for (long c = 2; ; c++) {
        for (long b = 1; b < c; ++b) {
            for (long a = 0; a < b; ++a) {
                if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
                    if (a + b + c == 1000) {
                        printf("Found. a: %lu, b: %lu, c: %lu\nProduct: %lu\n",
                               a, b, c, a * b * c);
                        return EXIT_SUCCESS;
                    }
                }
            }
        }
    }
    return EXIT_SUCCESS;
}
