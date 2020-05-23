#include <stdio.h>
#include <stdlib.h>

long faktoriyelHesaplamaRecursif(long sayi);
long faktoriyelHesaplamaIteratif(long sayi);

int main()
{
    int i;

    printf("Donguler ile ilk 10 sayinin faktoriyelini hesaplama\n");
    for(i=0;i<10;i++)
        printf("%d!=%d\n",i,faktoriyelHesaplamaIteratif(i));
    printf("\n\nOzyinelemeli fonksiyon ile faktoriyel hesaplama\n");
        for(i=0;i<10;i++)
    printf("%d!=%d\n",i,faktoriyelHesaplamaRecursif(i));
    return 0;
}
//Donguler ile hesaplama.
long faktoriyelHesaplamaIteratif(long sayi)
{
    long i,sonuc=1;

    for(i=1;i<=sayi;i++)
    {
        sonuc = sonuc * i;

    }
    return sonuc;
}


//Ozyineleme ile hesaplama.
long faktoriyelHesaplamaRecursif(long sayi)
{
    if(sayi == 1 || sayi== 0)
        return 1;

    long sonuc =sayi * faktoriyelHesaplamaRecursif(sayi-1);
    return sonuc;
}
