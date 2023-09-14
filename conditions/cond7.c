#include <stdio.h>
#include <stdlib.h>

int main()

{
    char charactere;
    int ascii;

    scanf(" %c", &charactere);

    ascii = (int)charactere;

    if (ascii >= 65 && ascii <= 90)
    {
        printf("alphabet majuscule");
    }
    else
    {
        printf("alphabet miniscule");
    }

    return 0;
}
