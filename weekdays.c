#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("1 represents Monday.\n");
            break;
        case 2:
            printf("2 represents Tuesday.\n");
            break;
        case 3:
            printf("3 represents Wednesday.\n");
            break;
        case 4:
            printf("4 represents Thursday.\n");
            break;
        case 5:
            printf("5 represents Friday.\n");
            break;
        case 6:
            printf("6 represents Saturday.\n");
            break;
        case 7:
            printf("7 represents Sunday.\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}

