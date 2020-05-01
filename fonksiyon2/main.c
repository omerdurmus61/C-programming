#include <stdio.h>
#include <stdlib.h>

int tekcift(int girilenSayi)
{
   if(girilenSayi%2==0)
    {
       return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int sayi,sonuc;
    printf("Bir sayi giriniz.\n");
    scanf("%d",&sayi);

    sonuc=tekcift(sayi);

    if(sonuc)
        printf("sayi cift.");
    else
        printf("sayi tek.");

    return 0;
}
