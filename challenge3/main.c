#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1, var2;
    printf("entrer la premiere valeur : \n");
    scanf("%d",&var1);
    printf("entrer la deuxieme valeur : \n");
    scanf("%d",&var2);
    printf("la somme des deux valeurs est : %d\n",var1+var2);
    printf("la soustraction des deux valeurs est : %d\n",var1-var2);
    printf("le produit des deux valeurs est : %d\n",var1*var2);
    printf("la division des deux valeurs est : %d\n",var1/var2);
    printf("la des deux valeurs est : %d\n",var1%var2);

    return 0;
}
