#include <stdio.h>

void displayScore(int team1Score, int team2Score) {
    printf("\nScore:\n Team 1 - %d\n Team 2 - %d\n", team1Score, team2Score);
}

int main() {
    int team1Score = 0;
    int team2Score = 0;
    int choice;

    printf("Football Scorecard\n");

    do {
        displayScore(team1Score, team2Score);
        printf("\nMenu:\n");
        printf("1. Goal for Team 1\n");
        printf("2. Goal for Team 2\n");
        printf("3. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch (choice) {
            case 1:
                team1Score++;
                printf("Goal for Team 1! Team 1 score: %d\n", team1Score);
                break;
            case 2:
                team2Score++;
                printf("Goal for Team 2! Team 2 score: %d\n", team2Score);
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 3);

    return 0;
}

