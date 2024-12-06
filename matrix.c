#include <stdio.h>

int main() {
    int m, n, i, j;

    // Input the number of rows and columns
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);

    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int matrix[m][n]; // Declare matrix with m rows and n columns

    // Input the elements of the matrix
    printf("\nEnter the matrix elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("\nThe matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]); // Print each element with space
        }
        printf("\n"); // New line after each row
    }

    return 0;
}

