#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
    int sayi1,sayi2;
    int bolum;
    int kalan;
    printf("iki adet sayi girinz\n"),
    scanf("%d %d",&sayi1,&sayi2);

    bolum = sayi1/sayi2;

    kalan = sayi1%sayi2;

    printf("bolum = %d\n",bolum);
    printf("kalan = %d",kalan);
        return 0;
}
