#include <stdio.h>
#include <stdlib.h>

int kare(int sayi)
{
    int sonuc= sayi*sayi;

    return sonuc;
}

int main()
{
    int x=4,karesi;

    karesi = kare(x);

    printf("%d",karesi);

    return 0;
}
