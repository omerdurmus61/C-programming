#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand (time(NULL));

    float bakiye= (float) (rand() % 2000);
    float cekilecek=0;

    printf("su anki bakiyeniz %.2f\n",bakiye);
    printf("Lutfen cekmek istediginiz miktari giriniz\n");
    scanf("%f",&cekilecek);

    if(cekilecek<=bakiye)
    {
        bakiye=bakiye-cekilecek;
        printf("cekilen para miktari = %.2f\n",cekilecek);
        printf("kalan bakiye = %.2f\n",bakiye);
    }

    else
    {
        printf("yetersiz bakiye.\n");
    }
    return 0;
}
