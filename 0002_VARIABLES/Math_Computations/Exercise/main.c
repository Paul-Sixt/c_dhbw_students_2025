#include <stdio.h>

int main() {
    float x;
    float y;

    printf("x-Wert wählen: ");
    scanf("%f", &x);
    printf("y-Wert wählen: ");
    scanf("%f", &y);

    float z1 = x*x + y*y - (x*y) + 2;
    float z2 = (x-y) * (x-y) * (x-y) - 3;
    float z3 = (float)(2.0 * x * x * x - 0.5 * x * x - x + 4.0) / y;

    printf("z1 = %f\nz2 = %f\nz3 = %f\n", z1, z2, z3);

    return 0;
}