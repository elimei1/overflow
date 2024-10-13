#include <stdio.h>

int main() {
    volatile int secret_treasure = 0;  // variable holds treasure status
    char buffer[8];  // 8-byte buffer for input

    printf("Welcome to the Treasure Hunt!\n");
    printf("The buffer is set to 8. If you exceed this limit, you may reveal the treasure!\n");
    printf("Initially, the treasure status is hidden...\n\n");

    // user input
    printf("Enter your code: ");
    
    // gets() doesn't check the length of input !!
    gets(buffer);

    // check if overflow
    if (secret_treasure != 0) {
        // overflow reveals treasure
        printf("\n**** Treasure Found! ****\n");
        printf("Your treasure is: FLAG{BUFFER OVERFLOW}\n");
    } else {
        printf("\nSorry, your code was too small. No treasure found.\n");
    }

    return 0;
}
