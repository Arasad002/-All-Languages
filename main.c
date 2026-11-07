
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));
    int randomnumber = (rand() % 100) + 1;
    int gusses_no, no_of_gusses = 0;

    char g_name[88];

    printf("Enter Your Gamer Name = ");
    scanf("%s", &g_name);
    do
    {
        printf("Gusses The Number = ");
        scanf("%d", &gusses_no);

        if (gusses_no > randomnumber)
        {
            printf("Lower Number please \n");
        }
        else if (gusses_no < randomnumber)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("Congrats !! ");
        }
        no_of_gusses ++;
    } while (gusses_no != randomnumber);

    printf("%d", no_of_gusses);

    FILE *p;

    int no;

    p = fopen("mygame.txt", "r");
    fscanf(p, "%d", &no);
    if (no > no_of_gusses || no == "")
    {
        p = fopen("mygame.txt", "a");
        fprintf(p, "%s Score Is = %d\n", g_name, no_of_gusses);
    }
    fclose(p);

    return 0;
}