#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number  generator with the current time
    // srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int gussed_no;
    char g__name[100];

    printf("Enter the name ");
    scanf("%s", &g__name);
    
    do
    {
        printf("Guess The number = ");
        scanf("%d", &gussed_no);

        if (gussed_no > randomNumber)
        {
            printf("Lower number please ! \n");
        }
        else if (gussed_no < randomNumber)
        {
            printf("Higher number please ! \n");
        }
        else
        {
            printf("Congrats *!!* \n");
        }
        no_of_guesses++;

    } while (gussed_no != randomNumber);

    printf("You Gussed the number in %d guesses ", no_of_guesses);

    // FILE *p;
    // int no;

    // p = fopen("game.txt", "r");
    // fscanf(p,"%d", &no);

    // if (no > no_of_guesses || no =="")  
    // {
    //     p = fopen("Game.txt","w");
    //     fprintf(p, "%s Score Is = %d\n", g__name, no_of_guesses);
    // }
    // fclose(p);


    return 0;
}
