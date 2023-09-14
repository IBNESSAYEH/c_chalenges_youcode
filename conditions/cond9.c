#include <stdio.h>
#include <stdlib.h>

int main()

{
    char caractere;
    int ascii;
    printf("entrer un caractere");
    scanf(" %c", &caractere);

    ascii = (int)caractere;

    if (ascii >= 65 && ascii <= 90)
    {
        printf("le caractere est un alphabets majuscule");
    }
    else if (ascii >= 97 && ascii <= 122)
    {
        printf("le caractere est un alphabets minuscule");
    }
    else
    {
        printf("le caractere est un  nombre ");
    }

    return 0;
}
