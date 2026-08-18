#include <stdio.h>

#define AttemptsLeft 5

int main()
{
    // header
    printf("---------------------------\n");
    printf("Let's play a guessing game!\n");
    printf("---------------------------\n");

    int secretNumber = 42;
    int guess;

    // counter
    for (int i = 1; i <= AttemptsLeft; i++)
    {
        printf("Guess: %d of %d \n", i, AttemptsLeft);
        printf("What's your guess? ");

        // reads input from the user.
        scanf("%d", &guess);

        printf("Your guess was: %d\n", guess);

        int correct = (guess == secretNumber);

        if (correct)
        {
            printf("Well done! You guessed it! \n");
            printf("Play again, you're a good player! \n");

            // stop the for
            break;
        }
        else
        {
            int high = (guess > secretNumber);
            if (high)
            {
                printf("Your guess is too high!\n");
            }
            else
            {
                printf("Your guess is too low!\n");
            }
        }
    }
    printf("Game over!\n");
}