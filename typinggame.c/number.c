#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, number, attempts = 0;

    // Seed for the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    number = rand() % 10 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Try to guess the number between 1 and 10.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
        }

    } while (guess != number);

    return 0;
}
