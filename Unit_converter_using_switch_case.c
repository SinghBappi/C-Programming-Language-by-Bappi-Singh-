#include <stdio.h>

int main() {
    int choice;
    float input, result;

    while (1) {
        // Display menu options
        printf("\nUnit Converter Menu:\n");
        printf("1. Kilometers to Miles\n");
        printf("2. Meters to Feet\n");
        printf("3. Centimeters to Inches\n");
        printf("4. Exit\n");

        // Get the user's choice
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        // Perform conversion based on user's choice
        switch (choice) {
            case 1:
                // Kilometers to Miles conversion
                printf("Enter distance in kilometers: ");
                scanf("%f", &input);
                result = input * 0.621371;  // 1 kilometer = 0.621371 miles
                printf("%.2f kilometers is equal to %.2f miles.\n", input, result);
                break;
            
            case 2:
                // Meters to Feet conversion
                printf("Enter distance in meters: ");
                scanf("%f", &input);
                result = input * 3.28084;  // 1 meter = 3.28084 feet
                printf("%.2f meters is equal to %.2f feet.\n", input, result);
                break;

            case 3:
                // Centimeters to Inches conversion
                printf("Enter length in centimeters: ");
                scanf("%f", &input);
                result = input * 0.393701;  // 1 centimeter = 0.393701 inches
                printf("%.2f centimeters is equal to %.2f inches.\n", input, result);
                break;

            case 4:
                // Exit the program
                printf("Exiting program.\n");
                return 0;  // Exit the loop and program

            default:
                // Invalid input handling
                printf("Invalid choice! Please enter a valid option.\n");
                break;
        }
    }

    return 0;
}

