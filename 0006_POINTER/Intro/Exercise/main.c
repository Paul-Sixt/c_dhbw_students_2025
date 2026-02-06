#include <stdio.h>

int main() {
    int aValue = 42;

    int *myPointer = &aValue;

    printf("Initial value: \t\t\t\t%d\n", aValue);
    printf("Value through pointer: \t\t\t%d\n", *myPointer);

    *myPointer = 20;
    printf("Modified value of aValue through myPointer: \t%d\n\n", *myPointer);

    int *yourPointer = myPointer;
    *yourPointer = 99;
    
    printf("Address of aValue: \t\t%p\n", (void*)&aValue);
    printf("Address of myPointer: \t\t%p\n", (void*)&myPointer);
    printf("Address of yourPointer: \t%p\n", (void*)&yourPointer);

    return 0;
}