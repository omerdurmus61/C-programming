#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dakika,ucret;
    printf("Konusma surenizi dakikda cinsinden giriniz.\n");
    scanf("%f",&dakika);

    //ÝLK 3 DAKÝKA 0.25 TL.

    if(dakika<=3)
    {
        ucret=0.25;
        printf("Ucret=%.2f",ucret);
    }

    else

    {
        //Ýlk 3 dakika sonrasi her dakika 0.08 kuruþ,
        ucret= 0.08*(dakika-3)+0.25;
        printf("ucret=%.2f",ucret);

    }




    return 0;
}
