#include <stdio.h>
#include <stdlib.h>

// fonksiyon imzasý kullanýmý.

 int ortalama(int deger1,int deger2);

 /*fonksiyon imzasýný kullanmadan sadece mainin altýnda fonksiyonu tanýmlarsak

 eski derleycilerde hata alabiliriz ayný deðiþkenlerde olduðu gibi. Deðiþkeni kullanmadan önce tanýmlamak gerekir,fonksiyonda da

 bir imza gerekli fakat bu imza satýrý olmadan da günümüz derleycilerinde çalýþýr*/

int main()
{
   int sayi1=10,sayi2=2;

    printf("(%d+%d)/%d=%d",sayi1,sayi2,2,ortalama(sayi1,sayi2));

    return 0;
}

int ortalama(int deger1,int deger2)
{
    return (deger1+deger2)/2;
}
