#include <stdio.h>
#include <stdlib.h>

int main()

{
    int numero;
    printf("entre  un numero");
    scanf(" %d", &numero);
    if (numero > 0)
    {
        printf("positif");
    }
    else if (numero < 0)
    {
        printf("negative");
    }
    else
    {
        printf("zero");
    }



    return 0;
}
