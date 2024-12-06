#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 10 == 0) {
        printf("%d is a multiple of 10.\n", num);
    } else {
        printf("%d is not a multiple of 10.\n", num);
    }

    return 0;
}
