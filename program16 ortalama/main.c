#include <stdio.h>
#include <stdlib.h>

int main()
{
    int adet,toplam=0;

    printf("Kac adet sayi girilecek.\n");
    scanf("%d",&adet);
    int dizi[adet];
    printf("Elemanlari giriniz.\n");
    int i;
    for(i=0;i<adet;i++)
    {
        scanf("%d",&dizi[i]);
        toplam=toplam+dizi[i];
    }
    printf("ortalama=%.2f",((float)toplam)/adet);

    return 0;
}
