#include <stdio.h>
#include <stdlib.h>

int main()
{
    float rayon,cercle;


    printf("entrer le rayon du cercle : \n");
    scanf("%f",&rayon);
    cercle = 3.14 * rayon;
    printf("la circonf�rence du cercle  est : %.2f \n",cercle);
    return 0;
}
