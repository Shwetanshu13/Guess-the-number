#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, trials = 1;
    int guess[50];

    srand(time(0));
    num = rand() % 100 + 1;
    // printf("%d\n\n", num);

    printf("Guess the number\n");
    scanf("%d", &guess[0]);

    if (guess[0] == num)
    {
        printf("You guessed the number rightly.\n");
        printf("Number of trials = %d\n", trials);
        goto end;
    }

    else if (-10 <= num - guess[0] && num - guess[0] <= 0)
    {
        printf("Warm\n");
    }

    else if (10 >= num - guess[0] && num - guess[0] >= 0)
    {
        printf("Warm\n");
    }

    else
    {
        printf("Cold\n");
    }

    for (int i = 1; i < 50; i++)
    {
        printf("Guess the number\n");
        scanf("%d", &guess[i]);
        int j = i - 1;
        trials++;

        if (guess[i] == num)
        {
            printf("You guessed the number rightly.\n");
            printf("Number of trials = %d\n", trials);
            goto end;
        }

        else if (guess[j] - num >= guess[i] - num && guess[i] - num >= 0)
        {
            printf("Warmer\n");
        }

        else if (num - guess[j] >= num - guess[i] && num - guess[i] >= 0)
        {
            printf("Warmer\n");
        }

        else
        {
            printf("Colder\n");
        }
    }

end:

    return 0;
}