
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B;
    printf("entrer un nombre");
    scanf("%d", &A);
    printf("entrer un nombre");
    scanf("%d", &B);

    if (A == B)
    {
        printf("%d", A * 6 );
    }
    else
    {
        printf("%d", B + A);
    }

    return 0;
}
