#include <stdio.h>
#include <stdlib.h>
/*funcion lower, convierte las letras mayusculas en minusculas usando un condicional. NO usar if ni else.*/

int lower(char a)
{
    char x;
    x = a + 32;
    return x;
}

int main()

{
    char a = getchar();
    char b = lower(a);
    printf("%c",b);
    return 0;
}
