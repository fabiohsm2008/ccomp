#include <stdio.h>
#include <stdlib.h>
/*Reciba string de la forma "123.45e-6" y  devuelva su correspondiente numero*/

int potencia(int a,int b)
{
    int x;
    x = a;
    if (b == 0)
        return 1;
    while(b != 1){
        a *= x;
        --b;}
    return a;
}

int convertir(char s[])
{
    float x, y;
    x = 0.0;
    y = 0.0;
    int i, a, valor, indice;
    a = 0;
    for (i = 0; s[i] != '.'; ++i){
        x = 10 * x + (s[i] - '0');
    }
    ++i;
    for (i = i; s[i] != 'e'; ++i){
        y = 10*y + (s[i]-'0');
        ++a;
    }
    ++i;
    y = y / potencia(10,a);
    for (i = i; s[i] != '\0'; ++i){
        if (s[i] == '-')
            valor = -1;
        else if(s[i] == '+')
            valor = 1;
        else
            indice = (s[i] - '0');
    }
    if (valor == -1)
        printf("%.9f",((x+y)/potencia(10,indice)));
    else
        printf("%.9f",((x+y)*potencia(10,indice)));
    return 0;
}

int main()
{
    char num[] = "123.45e-6";
    printf("%s\n",num);
    convertir(num);
    return 0;
}
