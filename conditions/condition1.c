#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr, reste;
    printf("entrer un nombre : ");
    scanf("%d", &nbr);

    reste = nbr % 2;
    if (reste == 0)
    {
        printf("votre nombre est paire");
    }
    else
    {
        printf("votre nombre est impaire");
    }

    return 0;
}
