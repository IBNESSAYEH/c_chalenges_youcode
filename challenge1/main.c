#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[18];
    char prenom[18];
    char telephone[10];
    char sexe[12];
    int age;
    printf("entrer votre nom : ");
    scanf("%s",&nom);
     printf("entrer votre prenom : ");
    scanf("%s",&prenom);
     printf("entrer votre telephone : ");
    scanf("%s",&telephone);
     printf("entrer votre sexe : ");
    scanf("%s",&sexe);
     printf("entrer votre age : ");
    scanf("%d",&age);
    if(sexe == "homme"){
        printf("vous etes Monsieur : %s %s \n",nom , prenom);
        printf("age de : %d \n",age);
    }else{
        printf("vous etes Madame : %s %s \n",nom , prenom);
        printf("agee de : %d \n",age);
    }

    printf("votre numero de telephone est : %s \n",telephone);
    return 0;
}
