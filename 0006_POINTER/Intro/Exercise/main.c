#include <stdio.h>

int main()
{
    int aValue = 42;
    int *myPointer = &aValue;

    printf("\nInitial value:\t\t\t\t\t%d", aValue);
    printf("\nValue through pointer:\t\t\t\t%d", *myPointer);

    *myPointer = 20;

    printf("\nModified value of aValue through myPointer:\t%d", *myPointer);

    int *yourPointer = myPointer;

    printf("\n\nAddress of aValue:\t\t\t\t%p", &aValue);
    printf("\nAddress of myPointer:\t\t\t\t%p", &myPointer);
    printf("\nAddress of yourPointer:\t\t\t\t%p", &yourPointer);

    return 0;
}