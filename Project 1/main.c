#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int random = (rand() % 100) + 1;

    int guess;
    int no_of_guess = 0;
    printf("%d", random);

    do
    {
        printf("Enter your guess: \n");
        scanf("%d", &guess);
        no_of_guess++;

        if (guess == random)
        {
            printf("Your Guess is correct\n");
            break;
        }
        else if (guess >= random)
        {
            printf("your guess is biger than random.\n");
        }
        else
        {
            printf("your guess is smaller than random.\n");
        }
    } while (guess != random);

    printf("You attempt %d times.\n", no_of_guess);

    return 0;
}