#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{
    float nbr1, nbr2, delta, a, b, c;
    printf("Entrez les valeurs des: a, b, c \n");
    scanf("%f %f %f", &a, &b, &c);
    delta = (b * b) - (4 * a * c);

    if (delta == 0.0)
    {
        nbr1 = -b / (2 * a);
        printf("nbr1  = %.2f \n", nbr1);
    }
    if (delta > 0.0)
    {
        nbr1 = (-b - sqrt(delta)) / (2 * a);
        nbr2 = (-b + sqrt(delta)) / (2 * a);
        printf("nbr1 = %.2f et nbr2 = %.2f \n", nbr1, nbr1);
    }
    if (delta < 0.0)
        printf("pas de solution");
    return 0;
}
