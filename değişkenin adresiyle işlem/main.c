#include <stdio.h>
#include <stdlib.h>

void kare(int *sonuc,int *sayi)
{
     *sonuc= *sayi * *sayi;

}

int main()
{
    int x=4,karesi,sonucum;

    kare(&sonucum,&x);

    printf("%d",sonucum);

    return 0;
}
