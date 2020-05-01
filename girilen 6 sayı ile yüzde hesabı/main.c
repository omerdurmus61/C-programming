#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sayi1 ,sayi2 ,sayi3 ,sayi4 ,sayi5 ,sayi6;
    printf("Alti adet sayi giriniz\n");
    scanf("%d %d %d %d %d %d",&sayi1,&sayi2,&sayi3,&sayi4,&sayi5,&sayi6);

    float toplam = sayi1+sayi2+sayi3+sayi4+sayi5+sayi6;

    printf("sayi1 degeri toplamin yuzde %.2f dir.\n",sayi1*(float)100/toplam);
    printf("sayi2 degeri toplamin yuzde %.2f dir.\n",sayi2*(float)100/toplam);
    printf("sayi3 degeri toplamin yuzde %.2f dir.\n",sayi3*(float)100/toplam);
    printf("sayi4 degeri toplamin yuzde %.2f dir.\n",sayi4*(float)100/toplam);
    printf("sayi5 degeri toplamin yuzde %.2f dir.\n",sayi5*(float)100/toplam);
    printf("sayi6 degeri toplamin yuzde %.2f dir.\n",sayi6*(float)100/toplam);

    return 0;
}
