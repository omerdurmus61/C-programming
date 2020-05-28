#include <stdio.h>
#include <stdlib.h>

int toplama(int deger1,int deger2)
{
    int sonuc=deger1+deger2;

    return sonuc;
}

int main()
{
    int sayi1=5 ,sayi2=10;

    int toplam=toplama(sayi1,sayi2);

    printf("%d+%d=%d",sayi1,sayi2,toplam);

    printf("\n%d+%d=%d",sayi1,sayi2,toplama(sayi1,sayi2));

    printf("\n%d+%d=%d",16,61,toplama(16,61));

    return 0;
}
