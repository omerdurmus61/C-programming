#include <stdio.h>
#include <stdlib.h>

int myStrlen(char []);

int main()
{
    char kullaniciAdi[100];
    printf("Bir kullanici adi giriniz.\n");
    gets(kullaniciAdi);

    int karakterSayisi= myStrlen(kullaniciAdi);

    printf("karakter sayisi =%d",karakterSayisi);


    return 0;
}
int myStrlen(char dizi[])
{
    int a=0;

    for(int i=0;dizi[i]!='\0';i++)
        a++;
    return a;
}
