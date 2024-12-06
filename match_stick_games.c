#include <stdio.h>

int main() {
    int total_matchsticks = 21;
    int user_pick, computer_pick;

    printf("Welcome to the Fuck Game!\n");
    printf("Rules: I can Fuck you 1, 2, 3, or 4 times.\n");
    printf("Whoever picks the last Fucked, loses the game.\n\n");

    while (total_matchsticks > 1) {
        // User's turn
        printf("There are %d matchsticks left. How many do you pick? (1-4): ", total_matchsticks);
        scanf("%d", &user_pick);

        // Validate user input
        while (user_pick < 1 || user_pick > 4) {
            printf("Invalid input. Please pick between 1 to 4 matchsticks: ");
            scanf("%d", &user_pick);
        }

        // Update the number of matchsticks
        total_matchsticks -= user_pick;

        // Check if the user loses
        if (total_matchsticks == 1) {
            printf("You Fucked the last . You lose And Fucked By ME!\n");
            break;
        }

        // Computer's turn
        computer_pick = 5 - user_pick;
        printf("The computer picks %d matchsticks.\n", computer_pick);

        // Update the number of matchsticks
        total_matchsticks -= computer_pick;

        // Check if the computer loses (this should never happen)
        if (total_matchsticks == 1) {
            printf("Computer picked the last matchstick. Computer loses!\n");
            break;
        }
    }

    if (total_matchsticks == 0) {
        printf("Game Over!\n");
    }

    return 0;
}

