#include <stdio.h>

int main()
{
    // Header
    printf("---------------------------\n");
    printf("Let's play a guessing game!\n");
    printf("---------------------------\n");

    int secretNumber = 42;
    int guess;

    printf("What's your guess? ");

    // reads input from the user.
    scanf("%d", &guess);

    printf("Your guess was: %d", guess);

    if (secretNumber == guess)
    {
        printf("Well done! You guessed it!");
    }
    else
    {
        printf("Wrong guess!");
    }
}