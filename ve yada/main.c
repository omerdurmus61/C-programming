#include <stdio.h>
#include <stdlib.h>

int main()
{
 //   &&   ||

    int yas;
    int ugurluSayi;
    printf("yasinizi girin\n");
    scanf("%d",&yas);
    printf("ugurlu sayinizi girini\n");
    scanf("%d",&ugurluSayi);
    if ( ((yas>30)&&(yas<60)) || (ugurluSayi==13) ){

        printf("30<yas<60");
    }

    return 0;
}
