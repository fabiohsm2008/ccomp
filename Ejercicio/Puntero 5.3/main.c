#include <stdio.h>
#include <stdlib.h>

// Concatenar cadenas de caracteres con punteros

void strcat(char *s, char *t)
{
    while (*s != '\0')
        ++s;
    *s = ' ';
    ++s;
    while ((*s = *t) != '\0'){
        ++s;
        ++t;
    }
}

int main()
{
    char a[] = "Hola";
    char b[] = "Juan";
    strcat(&a,&b);
    printf("%s",a);
    return 0;
}
