#include <stdio.h>
#include <stdlib.h>

 void carpYazdir(int ,int);
 void selamlar();
 // void selamlar(void); üstteki satýr ile ayný iþi yapar.



int main()
{
    int sayi1, sayi2;

    printf("Iki adet sayi giriniz.\n");
    scanf("%d%d",&sayi1,&sayi2);

    carpYazdir(sayi1,sayi2);
    selamlar();


    return 0;
}

void carpYazdir(deger1,deger2)
{
    printf("%d x %d = %d\n",deger1,deger2,deger1*deger2);
}

void selamlar()
{
    printf("selamlar program bitti.");
}
