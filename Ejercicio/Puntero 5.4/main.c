#include <stdio.h>
#include <stdlib.h>

int diferencia(char a[], char b[])
{
    int i;
    int largoa = 0;
    int largob = 0;
    for (i = 0; a[i] != '\0'; ++i)
        ++largoa;
    for (i = 0; b[i] != '\0'; ++i)
        ++largob;
    return (largoa-largob);
}

int largob(char b[])
{
    int largo;
    for (largo = 0; b[largo] != '\0';++largo)
        ;
    return largo;
}

int strend(char *s, char *t)
{
    int x = diferencia(s,t);
    int i = 0;
    int cont = 0;
    int largot = largob(t);
    while (i < x){
        ++i;
        ++s;
    }
    for (; *s != '\0'; ++s,++t){
        if (*s == *t){
            ++cont;
        }
    }
    if (cont == largot)
        return 1;
    return 0;
}

int main()
{
    char a[] = "Hola Mundo";
    char b[] = "Mundo";
    return strend(&a,&b);
}
