#include <stdio.h>
#include <stdlib.h>
/*Funcion recursiva reciba string y lo invierta*/

int largoaux(char a[])
{
    int x = 0;
    while(a[x]!='\0')++x;
    return x;
}

int invertir(char s[],int i, int j)
{
    char temp;
    if (i >= j)
        return s;
    else
        temp = s[i];
        s[i] = s[j-1];
        s[j-1] = temp;
        return invertir(s,++i,--j);
}

int main()
{
    char s[100];
    scanf("%s",s);
    int i = 0;
    int x = largoaux(s);
    invertir(s,i,x);
    printf("%s",s);

    return 0;
}
