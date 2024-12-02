#include <stdio.h>

int main() {
    int i = 0; // Initialize the loop counter

    // Loop from 0 to 255
    while (i <= 255) {
        printf("ASCII value of character %c = %d\n", i, i);
        i++; // Increment the loop counter
    }

    return 0;
}

