#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int random_number = rand() % 7;



    switch (random_number)
    {
    case 1:
        printf("lundi");
        break;
    case 2:
        printf("mardi");
        break;
    case 3:
        printf("mercredi");
        break;

    case 4:
        printf("jeudi");
        break;
    case 5:
        printf("vendredi");
        break;
    case 6:
        printf("samedi");
        break;
    case 7:
        printf("dimanche");
        break;

    }

    return 0;
}
