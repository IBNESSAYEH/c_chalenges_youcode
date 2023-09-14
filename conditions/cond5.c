#include <stdio.h>
#include <stdlib.h>

int main()

{
    int ans;
    printf("entre l' annee");
    scanf(" %d", &ans);

    printf("mois = %d \n", ans * 12);
    printf("jours = %d  \n", ans * 365);
    printf("hours = %d  \n", ans * 365 * 24);
    printf("minutes = %d  \n", ans * 365 * 24 * 60);
    printf("Secondes = %d  \n", ans * 365 * 24 * 60 * 60);

    return 0;
}
