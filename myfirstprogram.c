#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    int lower = 1, upper = 100;

    // Seed the random number generator
    srand(time(0));
    number = (rand() % (upper - lower + 1)) + lower; // Generate a random number between 1 and 100

    printf("Welcome to the Guessing Game!\n");
    printf("I have chosen a number between %d and %d.\n", lower, upper);
    printf("Can you guess it?\n");

    // Game loop
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number);

    return 0;
}
