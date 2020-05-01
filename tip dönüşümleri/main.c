#include <stdio.h>
#include <stdlib.h>

int main()
{   /* Bu kýsýmda sayi1 degiskeni float olmasýna ragmen 7 ve 3 int olduðu için sonuç 2.33 sayisinin int kýsmý olan 2 olur sayi1 2 ye eþitlenir */
    float sayi1 = 7/3;
    /* tip dönüþümü yapmadan önce sonuç hesaplanýyor ve sayi2 deðiskenine atanýyor bu yüden sayi2 deðiskeni 2 ye eþitleniyor.*/
    float sayi2 = (float)(7/3);
    /* tip dönüþümü operatörü bölme operatöründen önceliklidir bu yüzden önce 3 sayisi float tipine dönüþür
    ve 7 sayisi int olarak kalýr sonra iki sayýnýn bölünebilmesi için 7 sayisida floata dönüþtürülür ve bölme iþlemi yapýlýr sonuç yani sayi3 deðiþkeni float olur*/
    float sayi3 = 7/(float)3;
    /* tip dönüþümü operatörü bölme operatöründen önceliklidir bu yüzden yukarýdaki örnek ile aynýdýr.*/
    float sayi4 = (float)7/3;
    /*Burada iþi garantiye alýp iki sayi deðerinide önceden float yapýp iþleme sokuyoruz*/
    float sayi5 = (float)7/(float)3;

    printf("%f\n",sayi1);
    printf("%f\n",sayi2);
    printf("%f\n",sayi3);
    printf("%f\n",sayi4);
    printf("%f\n",sayi5);




    double d1 = 5.3;
    double d2 = 5.4;
    double d3 = 5.5;

    //önce toplayýp sonra tip deðiþtirme iþlemi yapýyoruz.

    int toplam1 = (int)(d1+d2+d3); // sonuç 16.2 fakat int olduðu için 16 yazýcak

    //önce tip deðiþtirme iþlemi yapýp sonra topluyoruz.

    int toplam2 = (int)d1+(int)d2+(int)d3;  // dobule deðiþkenlerinin küsüratlarý atýlýp toplanacak toplam 15


        printf("%d\n",toplam1);
        printf("%d\n",toplam2);

    return 0;
}
