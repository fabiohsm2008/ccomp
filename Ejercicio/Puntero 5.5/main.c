#include <stdio.h>
#include <stdlib.h>

void strncpy(char *s, char *t, int n)
{
    while(n != 0){
        *s = *t;
        --n;
        ++t;
        ++s;
    }
}

void strncat(char *s, char *t, int n)
{
    while (*s != '\0')
        ++s;
    *s = ' ';
    ++s;
    while (n != 0){
        *s = *t;
        ++s;
        ++t;
        --n;
    }
}

int strncmp(char *s, char *t)
{
    int conts = 0;
    int contt = 0;
    while (*s != '\0'){
        ++s;
        ++conts;
    }
    while (*t != '\0'){
        ++t;
        ++contt;
    }
    return conts-contt;
}

int main()
{
    char a[100] = "Bienvenido";
    printf("%s\n",a);
    char b[100] = "Hola Mundo";
    printf("%s\n",b);
    //int n;
    //scanf("%d",&n);
    printf("%d",strncmp(&a,&b));
    return 0;
}
