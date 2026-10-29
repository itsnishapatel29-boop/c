#include <stdio.h>
int main()
{
    int secret = 7;
    int guess;
    int i;
    
    printf ("Welcome to Number Guessing Game!\n");

    for (i=1; i<=5; i++)
    {
        printf("Guess a number between 1 and 10:");
        scanf("%d",&guess);

        if(guess==secret)
        {
            printf("congratulations! correct guess!\n");
            break;
        }
        else if (guess<secret)
        {
            printf("Too low! Try again.\n");

        }
        else
        {
            printf("Too high! try again.\n");
        }

    }
    
    if (guess != secret)
    {
        printf ("Gsme over! the correct number was %d.\n", secret);
    }
    return 0;
}