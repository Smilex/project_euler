#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int max = 4000000;
    int a = 1, b = 2, c;
    int sum = 2;

    while (b < max) {
        c = a + b;
        if (c % 2 == 0) {
            sum += c;
        }
        a = b;
        b = c;
        printf("%d, ", c);
    }

    printf("\nSum is: %d\n", sum);

    return EXIT_SUCCESS;
}
