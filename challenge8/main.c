#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr;
    printf(" entrer un nombre decimal : \n");

    scanf("%d", &nbr);

    printf(" en octal est : %o\n", nbr);

    printf(" en hexadecimal est : %X\n", nbr);

    return 0;
}
