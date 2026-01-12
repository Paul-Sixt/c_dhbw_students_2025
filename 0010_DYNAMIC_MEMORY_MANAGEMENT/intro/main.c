#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t length = 3;
    size_t memoryReq = length * sizeof(int);

    printf("\nadress of length: %p", (void*)&length);

    printf("\nsizeof(int): %lu", sizeof(int));
    printf("\nmemoryReg: %ld", memoryReq);

    int *heapArray = malloc(memoryReq);

    for(size_t i = 0; i < length; i++)
    {
        heapArray[i] = i * 100;
    }

    for(size_t i = 0; i < length; i++)
    {
        printf("\nheapArry[%ld]: %d", i, heapArray[i]);
    }

    free(heapArray);
    heapArray = NULL;

    return 0;
}