#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2;
    float distance;
    printf("entrer les parametres du premiere point : \n");
    printf("x1 = ");
    scanf("%f",&x1);
    printf("y1 = ");
    scanf("%f",&y1);
    printf("entrer les parametres du deuxieme point : \n");
    printf("x2 = ");
    scanf("%f",&x2);
    printf("y2 = ");
    scanf("%f",&y2);

    distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    printf("la distance entre les deux points  est : %.2f\n",distance);
    return 0;
}
