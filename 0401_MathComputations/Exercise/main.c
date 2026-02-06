#include <math.h>
#include <stdint.h>
#include <stdio.h>

double calculatePi(uint32_t n) {
    double x = 0;
    double fraction1 = 0;
    double fraction2 = 0;

    for(int k = 0; k < n; k++) {
        fraction1 += 1.0 / (4.0 * k + 1.0);
        fraction2 += 1.0 / (4.0 * k + 3.0);
    }

    x = fraction1 - fraction2;

    return x*4;
}


int main()
{
    // TODO: Part 1 - Calculate Pi
    uint32_t numIterations = 200;

    printf("number of iterations: %u\n", numIterations);
    printf("pi (calculated with approximation):\t%.20lf\n", calculatePi(numIterations));
    //printf("pi (correct on 20 decimal places):\t%.20lf\n\n", calculatePiDecimalPlaces20());

    // TODO: Part 2 - Decimal to Binary

    return 0;
}
