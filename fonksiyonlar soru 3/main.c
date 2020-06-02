#include <stdio.h>
#include <stdlib.h>
int kuvvetBul(int ,int );
int kuvvetBulV2(int ,int );
int kareBul(int );

int main()
{
    int sayi,kuvvet;
    printf("bir sayi ve bir kuvvet giriniz.\n");
    scanf("%d%d",&sayi,&kuvvet);
    printf("%d^%d=%d\n",sayi,kuvvet,kuvvetBul(sayi,kuvvet));
    printf("%v2 ==> %d^%d=%d",sayi,kuvvet,kuvvetBulV2(sayi,kuvvet));
    return 0;
}
int kareBul(int sayi)
{
    return sayi*sayi;
}

int kuvvetBul(int sayi,int kuvvet)
{
    int sonuc=1;
    for(int i=0;i<kuvvet;i++)
    {
     sonuc=sonuc*sayi;
    }
    return sonuc;
}
int kuvvetBulV2(int sayi ,int kuvvet)
{
    int sonuc = kareBul(sayi);

    for(int i=0;i<kuvvet-2;i++)
        sonuc=sonuc*sayi;

    return sonuc;,

}

