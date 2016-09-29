#include <stdio.h>
#include <stdlib.h>

//Convertir a mayúscula con punteros

int convertir(char a)
{
    char m, *p;
    p = &a;
    m = *p ^ 32;
    return m;
}

int main()
{
    char minus;
    minus = getchar();
    printf("%c",convertir(minus));
    return 0;
}
