#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charr, res;
    printf("entrer une lettre");
    scanf("%c", &charr);

    switch (charr)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'y':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'Y':
        printf("votre lettre est  un voyelle");
        break;
    default:
        printf("votre lettre ce n'est pas un voyelle");
        break;
    }

    return 0;
}
