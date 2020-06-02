#include <stdio.h>
#include <stdlib.h>

void kareBul(int );

int main()
{
    int sayi;
    printf("karesi alinacak bir sayi giriniz.\n");
    scanf("%d",&sayi);

    kareBul(sayi);

    return 0;
}
/* Bir bilgi verelim genellikle void ile tanýmlanan fonksiyonlarda return ifadesi kullanýlmaz denir ancak sadece return ifadesi kullanýlabilinir.Eðer bir deðer döndürmeden sadece return yazaýp komutun kullanýmý gereði
 bir de ";" koyarsanýz program return ifadesini gördüðü yerde sonlanýr */
void kareBul(int sayi)
{
    printf("sayinin karesi=%d",sayi*sayi);
    return ;
}
