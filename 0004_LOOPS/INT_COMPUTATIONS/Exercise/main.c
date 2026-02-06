#include <stdint.h>
#include <stdio.h>

int main() {
    uint32_t number;
    uint32_t num_digits = 0;
    uint32_t cross_sum = 0;
    uint32_t tempNumber;

    printf("Please enter a unsinged integer: ");
    scanf("%u", &number);
    tempNumber = number;

    // sum of digits
    while(tempNumber > 0) {
        tempNumber /= 10;
        num_digits++;
    }
    printf("sum of digits: %u\n", num_digits);

    // cross sum
    while(number > 0) {
        cross_sum += number % 10;
        number /= 10;
    }
    printf("cross sum: %u\n", cross_sum);
}