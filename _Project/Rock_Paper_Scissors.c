#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printChoice(int choice) {
    if (choice == 1) printf("Rock 🪨");
    else if (choice == 2) printf("Paper 📄");
    else if (choice == 3) printf("Scissors ✂️");
}

int main() {
    int playerChoice, computerChoice;
    int playerScore = 0, computerScore = 0, rounds = 0;
    char playAgain;

    srand(time(0));

    printf("========================================\n");
    printf("       WELCOME TO ROCK, PAPER, SCISSORS   \n");
    printf("========================================\n");

    do {
        rounds++;
        printf("\n--- Round %d ---\n", rounds);
        printf("Choose your weapon:\n");
        printf("1. Rock 🪨\n");
        printf("2. Paper 📄\n");
        printf("3. Scissors ✂️\n");
        printf("Enter your choice (1-3): ");
        
        
        if (scanf("%d", &playerChoice) != 1 || playerChoice < 1 || playerChoice > 3) {
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
            
            while (getchar() != '\n');
            rounds--; 
            continue;
        }

        computerChoice = (rand() % 3) + 1;

        printf("\nYou chose: ");
        printChoice(playerChoice);
        printf("\nComputer chose: ");
        printChoice(computerChoice);
        printf("\n\n");

        if (playerChoice == computerChoice) {
            printf("RESULT: It's a tie! 🤝\n");
        } 
        else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            printf("RESULT: You win this round! 🎉\n");
            playerScore++;
        } 
        else {
            printf("RESULT: Computer wins this round! 💻\n");
            computerScore++;
        }

        printf("\n----------------------------------------\n");
        printf("SCOREBOARD -> You: %d | Computer: %d\n", playerScore, computerScore);
        printf("----------------------------------------\n");

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("\nThanks for playing! Final Score:\n");
    printf("You: %d | Computer: %d\n", playerScore, computerScore);
    if (playerScore > computerScore) {
        printf("Congratulations, you won the match overall! 🏆\n");
    } else if (playerScore < computerScore) {
        printf("Computer wins the match overall. Better luck next time! 🤖\n");
    } else {
        printf("The match ended in a draw! 🤝\n");
    }

    return 0;
}