#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, somme;
    float moyenne;
    printf("entrer la premiere valeur : \n");
    scanf("%d",&a);
    printf("entrer la deuxieme valeur : \n");
    scanf("%d",&b);
    printf("entrer la troisieme valeur : \n");
    scanf("%d",&c);
    printf("entrer la quatrieme valeur : \n");
    scanf("%d",&d);
    somme = a+b+c+d;
    printf("la somme des valeurs est : %d\n",somme);
    moyenne = somme /4;
    printf("la moyenne des valeurs est : %.2f\n",moyenne);
    return 0;
}
