#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;


    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess the number (1 to 100):\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > number)
            printf("Too High!\n");
        else if (guess < number)
            printf("Too Low!\n");
        else
            printf("Congratulations! You guessed the correct number.\n");

    } while (guess != number);

    return 0;
}