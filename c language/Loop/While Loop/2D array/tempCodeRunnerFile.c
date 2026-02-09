#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, compChoice;

    // Seed the random number generator using current time
    srand(time(NULL));

    // Generate a random choice for the computer (1=Rock, 2=Paper, 3=Scissors)
    compChoice = rand() % 3 + 1;

    printf("------------Rock, Paper, Scissors Game-----------\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("---------------------------------------------------\n");
    printf("Enter your Choice: ");
    scanf("%d", &userChoice);

    printf("\nUser chose: %d\n", userChoice);
    printf("Computer chose: %d\n", compChoice);

    // Determine the winner
    if (userChoice == compChoice) {
        printf("Game is a tie!\n");
    } else if ((userChoice == 1 && compChoice == 3) || // Rock beats Scissors
               (userChoice == 2 && compChoice == 1) || // Paper beats Rock
               (userChoice == 3 && compChoice == 2)) { // Scissors beats Paper
        printf("You won the Game!\n");
    } else {
        printf("You lose the Game!\n");
    }

    return 0;
}
