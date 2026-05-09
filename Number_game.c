#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int randomNumber;

    // 1. Seed the random number generator
    // We use the current time so the sequence changes every time you run the app.
    srand(time(NULL));

    // 2. Generate the number
    // rand() % 100 gives a range of 0 to 99.
    // We add 1 to shift that range to 1 to 100.
    randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    do
    {
        printf("Guess the number:");
        scanf("%d", &guessed_number);
        if (guessed_number > randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if (guessed_number < randomNumber)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congrats!!\n");
        }
        no_of_guesses++;
    } while (guessed_number != randomNumber);

    printf("You guessed the number in %d guesses.", no_of_guesses);

    return 0;
}