#include <stdio.h>

int main()
{
    char character;
    char character2;

    printf("Please enter any ASCII character: ");
    scanf("%c", &character);
    
    // is numeric
    if(character >= '0' && character <= '9') {
        printf("The character is numeric.\n");
    }

    // is upper case
    if(character >= 'A' && character <= 'Z') {
        printf("The character is alpha upper case.\n");
    }

    // is lower case
    if(character >= 'a' && character <= 'z') {
        printf("The character is alpha lower case.\n");
    }

    // is alpha
    if((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) {
        printf("The character is alpha.\n");
    }

    // is alpha numeric
    if((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z') || (character >= '0' && character <= '9')) {
        printf("The character is alpha numeric.\n");
    }


    printf("\nCharacter case convertion (Enter new char): ");
    scanf(" %c", &character2); 

    if(character2 >= 'a' && character2 <= 'z') {
        printf("To Upper: %c\n", character2 - 32);
    }

    if(character2 >= 'A' && character2 <= 'Z') {
        printf("To Lower: %c\n", character2 + 32);
    }

    return 0;
}