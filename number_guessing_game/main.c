#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned)time(NULL));  // Seed RNG

    int randomNumber = (rand() % 100) + 1;
    int guessed;
    int number_of_guesses = 0;

    do {
        printf("GUESS THE NUMBER (1–100): ");
        if (scanf("%d", &guessed) != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Invalid input! Please enter an integer.\n\n");
            continue;
        }

        if (guessed < 1 || guessed > 100) {
            printf("Please enter a number between 1 and 100.\n\n");
            continue;
        }

        number_of_guesses++;

        if (guessed > randomNumber)
            printf("Too high! Try a lower number.\n\n");
        else if (guessed < randomNumber)
            printf("Too low! Try a higher number.\n\n");
        else
            printf("🎉 Congrats! You guessed the number in %d tries!\n", number_of_guesses);

    } while (guessed != randomNumber);

    return 0;
}
