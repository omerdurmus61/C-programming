#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2;
    printf("iki adet sayi giriniz.\n");
    scanf("%d%d",&sayi1,&sayi2);

    if(sayi1!=sayi2)
    {
        printf("%d sayisi %d sayisina esit degildir.\n",sayi1,sayi2);

    }
    if(sayi1==sayi2)
    {
        printf("%d sayisi %d sayisina esittir.\n",sayi1,sayi2);
    }


    if(sayi1>sayi2)
    {
        printf("%d sayisi %d sayisindan daha buyuktur.\n",sayi1,sayi2);
    }
    else if(sayi2>sayi1)
    {
         printf("%d sayisi %d sayisindan daha kucuktur.\n",sayi1,sayi2);
    }
    if(sayi1%sayi2==0)
    {
        printf("%d sayisi %d sayisinin katidir.\n",sayi1,sayi2);
    }
     else
    {
        printf("%d sayisi %d sayisinin kati degildir .\n",sayi1,sayi2);
    }
    return 0;
}
