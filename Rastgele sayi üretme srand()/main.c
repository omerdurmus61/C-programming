#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /* Programý her çalýþtýrdýðýmýzda farklý sayý görmek istiyorsak srand() kullanýrýz.
    time.h kütüphanesinde bulunur srand(time(NULL)) ile tanýmlanýr; */

    srand (time(NULL));

    int   rastgeleSayi = (50+rand()%1000);

    printf("%d",rastgeleSayi);


    /* (5*+rand()%1000); komutu rastgele gelen sayýnýn minimum 50 maksimum 1000 olacakðýný mod alma ve toplama iþlemi ile yapýlýr
    böylece 0 gelse dahi 50 ile toplanýr minimum 50 olur 1200 gelirse 1000 ile bölümünden kalan 200 ve 50 ile toplanýnca 250 sayýsý olucak */

    return 0;
}
