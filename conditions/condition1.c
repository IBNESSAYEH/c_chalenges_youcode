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
        printf("paire");
    }
    else
    {
        printf("impaire");
    }

    return 0;
}
