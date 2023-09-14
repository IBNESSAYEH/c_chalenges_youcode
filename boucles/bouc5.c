#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

   int nbr, inverse, a,j,i,k,tab[20];

    printf("entrer un nombre de trois chiffre : \n");
    scanf("%d",&nbr);
    i=0;

    while(nbr>0){
    a = nbr%10;
    nbr=nbr/10;
  tab[i]=a;
i++;
     }
     inverse=0;
     k=0;
     for(j=i-1;j>=0;j--){

        inverse += tab[j]*pow(10,k);
        k++;
     }

     printf("l'inverse du nombre est : %d ", inverse);
    return 0;
}
