#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sayi;
    printf("Hexadecimal bir deger giriniz\n");
    sayi = getchar();
    if(sayi<=9 || 'a' <= sayi <='f')
    {
        putchar(sayi);
    }
    return 0;
}
