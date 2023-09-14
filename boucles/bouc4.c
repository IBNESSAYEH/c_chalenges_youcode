#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nombre, resultat = 0;

    do
    {
        printf("entrer un nombre : ");
     scanf("%d", &nombre);


            if (nombre <= 100)
            {

                resultat +=  nombre;
            }



    } while (nombre != 0);
      printf("le resultat est = %d \n", resultat);

    return 0;
}
