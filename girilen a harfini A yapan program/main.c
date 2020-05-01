#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter;

    printf("kucuk bir harf girin \n");
    scanf("%c",&karakter);

    char buyukKarakter = karakter - 32;

    printf("harfin buyuk hali : %c",buyukKarakter);

    return 0;
}
