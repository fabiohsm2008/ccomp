#include <stdio.h>
#include <stdlib.h>
/*Funcion strindex(s,t), retorne la posicion de la ocurrencia mas a la derecha de t en s
retorne -1 si no lo encuentra.*/

int strindex(char s[], char t)
{
    int x, i, cont = 0;
    for(i = 0; s[i] != '\0'; ++i)
        if (s[i] == t){
            x = i;
            cont += 1;}
    if (cont == 0)
        return -1;
    return x;
}

int main()
{
    char s[] = "hola mundo";
    printf("%s\n",s);
    char t = getchar();
    int a  = strindex(s,t);
    printf("%d",a);
}

