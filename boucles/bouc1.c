#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
    printf("entrer un nombre : ");
    scanf("%d", &nombre);
    for (int i = 0; i <= 10; i++)
    {
        printf("%d * %d = %d \n", nombre, i, nombre * i);
    }

    return 0;
}
