#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1 = 5, sayi2 = 10;
    //iki adet tam sayi isaretcisi tanımla
    int * restrict ptr1;
    int * restrict ptr2;
    //sayi1 ve sayi2 nin adreslerini isaretci degiskenlere ata

    ptr1 = &sayi1;
    ptr2 = &sayi2;

    //sayıların degerlerini yazdir
    printf("sayi1 = %d , sayi2 = %d\n",sayi1,sayi2);
    *ptr1 = *ptr1 + 2;
    *ptr2 = *ptr2 + 2;
    *ptr1 = *ptr1 + 10;
    //sayilarin degerlerini tekrar yazdir
    printf("sayi1 = %d, sayi2 = %d\n",sayi1,sayi2);
    return 0;
}
