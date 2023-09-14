#include <stdio.h>
#include <stdlib.h>

int main()

{
    int moyenne;
     printf("entrer la moyenne d'eleve");
    scanf(" %d", &moyenne);






        if (moyenne < 10)
        {
            printf("l'eleve est recale");
        }
        else if (moyenne < 12)
        {
            printf("l'eleve est passable");
        }
        else if (moyenne < 14)
        {
            printf("l'eleve est assez bien");
        }
        else if (moyenne < 16)
        {
            printf("l'eleve est  bien.");
        }
        else
        {
            printf("l'eleve est  tres bien.");
        }



    return 0;
}
