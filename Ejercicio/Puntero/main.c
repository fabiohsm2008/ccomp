#include <stdio.h>
#include <stdlib.h>

//Convertir a may�scula con punteros

int convertir(char *p)
{
    return *p ^ 32;
}

int main()
{
    char minus;
    minus = getchar();
    printf("%c",convertir(&minus));
    return 0;
}
