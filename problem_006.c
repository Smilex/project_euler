#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    long sum_of_squares = 0;
    long sum = 0;
    long square_of_sum;
    long diff;

    for (long i = 1; i <= 100; ++i) {
        sum_of_squares += pow(i, 2);
        sum += i;
    }

    square_of_sum = pow(sum, 2);
    diff = square_of_sum - sum_of_squares;

    printf("Sum of squares: %lu\nSquare of sum: %lu\nDifference: %lu\n",
            sum_of_squares, square_of_sum, diff);
}
