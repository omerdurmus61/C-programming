#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void strToUpper(char dizi[]);

int main()
{
    char metin[100];
    printf("Bir metin giriniz\n");
    gets(metin);

    strToUpper(metin);


    return 0;
}
void strToUpper(char dizi[100])
{
    int uzunluk = strlen(dizi);

    for(int i=0;i<=uzunluk-1;i++)
    {
        printf("%c",toupper(dizi[i]));
    }
}
