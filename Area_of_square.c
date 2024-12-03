#include <stdio.h>

// Function to calculate the area of a square
int calculateArea(int side) {
    return side * side;
}

int main() {
    int side;

    printf("Enter the length of the side of the square: ");
    scanf("%d", &side);

    int area = calculateArea(side);
    printf("The area of the square is: %d\n", area);

    return 0;
}

