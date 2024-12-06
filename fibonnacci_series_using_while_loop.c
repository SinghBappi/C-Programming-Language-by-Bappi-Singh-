#include <stdio.h>

int main(void) {
    int n;
    int a = 0, b = 1, temp,i = 0;

    // Input: number of terms to display
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the Fibonacci series
    printf("Fibonacci Series: ");
    while(i<= n){
        printf("%d ", a);
        temp = a;
        a = b;
        b = temp + b;
i++;    }

    printf("\n");  // New line after the series is printed
    return 0;
}

