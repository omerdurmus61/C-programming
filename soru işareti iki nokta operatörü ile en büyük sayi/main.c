#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2,sayi3,buyukSayi;
    printf("uc adet sayi giriniz.\n");
    scanf("%d%d%d",&sayi1,&sayi2,&sayi3);

     buyukSayi=sayi1>sayi2 ? sayi1:sayi2;

     buyukSayi= buyukSayi>sayi3 ? buyukSayi:sayi3;

     printf("en buyuk sayi %d",buyukSayi);

    return 0;
}
