#include <stdio.h>
#include <stdlib.h>

int diziToplama(int dizi[],int elemanSayisi);

int main()
{   int dizi[11];
    for(int i=0;i<11;i++)
    {
        dizi[i]=i;

    }

    printf("Dizinin toplami=%d",diziToplama(dizi,11));

    return 0;
}
int diziToplama(int dizi[],int elemanSayisi)
{
    int toplam=0;
    for(int i=0;i<elemanSayisi;i++)
    {
        toplam=toplam+i;
    }

    return toplam;
}
