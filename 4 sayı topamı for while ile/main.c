#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[4];
    int i=0;
    int toplam;
    while(i<4)
    {
        printf("bir tam sayi giriniz.\n");
        scanf("%d",&dizi[i]);


        i++;

    }

    toplam=0;

    for(i=0;i<4;i++)
    {
        toplam = toplam + dizi[i];

    }
    printf("toplam=%d",toplam);
    return 0;
}
