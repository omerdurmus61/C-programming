#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dizi[10];
    float toplam = 0 ;

    for(int i=0;i<10;i++)
    {
        dizi[i]=i*2;
        toplam += dizi[i];
    }

    printf("toplam=%f",toplam);

    return 0;
}
