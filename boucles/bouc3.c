#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nombre, i, j,k;
    printf("entrer un nombre : ");
     scanf("%d", &nombre);

    for (int i = 2; i < nombre - 1; i++)
    {
        if (nombre % i != 0)
        {
            printf("il est premier");
            break;
        }
        else
        {
            printf("non  premier");
            break;
        }
    }

    return 0;
}
