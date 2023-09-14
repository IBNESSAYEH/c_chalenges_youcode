#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr, inverse;
    int a, b, c;
    printf("entrer un nombre de trois chiffre : \n");
    scanf("%d",&nbr);
    a = nbr%10;
    nbr = nbr/10;
    b = nbr%10;
    nbr = nbr/10;
    c = nbr%10;
    inverse = a*100 + b*10 + c;
    printf("l'inverse du nombre est : %d ", inverse);
    return 0;
}
