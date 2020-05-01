#include <stdio.h>
#include <stdlib.h>

int main()
{
    int birler,onlar,yuzler,sayi;
    printf("3 basamakli sayinin basamaklarini birler onlar yuzler seklinde giriniz.\n");
    scanf("%d%d%d",&birler,&onlar,&yuzler);
    sayi=100*yuzler+10*onlar+birler;
    printf("sayi=%d",sayi);
    return 0;
}
