#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,birlerBasamagi,onlarBasamagi,yuzlerBasamagi,binlerBasamagi;
    printf("bir sayi giriniz.\n");
    scanf("%d",&sayi);
    birlerBasamagi=sayi%10;
    onlarBasamagi=sayi%100/10;
    yuzlerBasamagi=sayi%1000/100;
    binlerBasamagi=sayi/1000;
    printf("birler basamagi=%d\n",birlerBasamagi);
    printf("onlar basamagi=%d\n",onlarBasamagi);
    printf("yuzler basamagi=%d\n",yuzlerBasamagi);
    printf("binler basamagi=%d",binlerBasamagi);
    return 0;
}
