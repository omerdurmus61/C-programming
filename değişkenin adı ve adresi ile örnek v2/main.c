#include <stdio.h>
#include <stdlib.h>

void ustunuAl(int sayi1,int sayi2,int *sonucum)
{   int i;
    *sonucum=1;
    for(i=0;i<sayi2;i++)
    {
        *sonucum= *sonucum * sayi1;
    }


}


int main()
{
    int x=4,y=5,sonuc;

    ustunuAl(x,y,&sonuc);

    printf("%d^%d=%d",x,y,sonuc);

    return 0;
}
