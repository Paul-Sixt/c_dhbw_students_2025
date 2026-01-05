#include <stdio.h>

// Call by Reference function
void printMemoryAddressAndValue(float *value)
{
    printf("\nMemory Address: \t%p", value);
    printf("\nValue: \t%.2f", *value);
}

// Call by Value function
int addValue(float a, float b)
{
    return a + b;
}

int main()
{
    float myFloat = 42.42f;

    printMemoryAddressAndValue(&myFloat);

    float userInput = 0.0f;
    printf("\nEnter a value (float) to add: ");
    scanf("%f",&userInput);

    float newValue = addValue(myFloat, userInput);
    printMemoryAddressAndValue(&newValue);

    return 0;
}