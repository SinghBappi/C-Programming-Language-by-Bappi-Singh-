
#include <stdio.h> // library function. with the help of this we can use printf and scanf

int main() {
    // code starts here
    int i, n; // assigning integers without values
    int a = 0, b = 1, temp; // assigning integers with values and also assigning temp integer without value

    // Input: number of terms to display
    printf("Enter the number of terms: "); // printing line
    scanf("%d", &n); // taking user input; '%d' is for taking integer value like 5; '&' is for addressing the value at variable

    // Print the Fibonacci series
    printf("Fibonacci Series: "); // printing line
    for (i = 0; i < n; i++) { // for loop begins; it starts from 0; 'i' should be less than user input and 'i' is incrementing by 1
        printf("%d ", a); // printing numbers
        temp = a; // assigning a's value to temp variable temporarily
        a = b; // assigning b's value to a variable
        b = temp + b; // assigning b to a's value adding with b's
    }

    printf("\n"); // New line after the series is printed
    return 0;
}