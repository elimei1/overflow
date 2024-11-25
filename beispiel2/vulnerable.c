#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void vuln(char *input) {
    char buffer[256];

    // print buffer address
    printf("Buffer address: %p\n", (void *)buffer);

    // copy input into buffer
    strcpy(buffer, input);  // vulnerable function
}

// argument is neccessary
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }

    vuln(argv[1]);

    // if vuln not crashed
    printf("Function executed without crashing.\n");
    return 0;
}
