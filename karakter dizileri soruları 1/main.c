#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tersYaz(char dizi[100] , int karakterSayisi)
{
    for(int i=karakterSayisi-1;i>=0;i--)
    {
        printf("%c",dizi[i]);
    }
}


int main()
{
    char dizi[100];
    int karakterSayisi;
    printf("Bir karakterdizisi giriniz.\n");
    scanf("%s",dizi);
    karakterSayisi=strlen(dizi);

    tersYaz(dizi,karakterSayisi);

    return 0;
}
