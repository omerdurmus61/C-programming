#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ad[10];
    char *soyad[10];
    int yas;
    printf("adinizi giriniz\n");
    scanf("%s",ad);
    printf("soyadinizi giriniz\n");
    scanf("%s",soyad);
    printf("yasinizi giriniz\n");
    scanf("%d",&yas);
    printf("Merhaba sayin %s %s yasiniz %d",ad,soyad,yas);
    return 0;
}
