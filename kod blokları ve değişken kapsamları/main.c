#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1. seviye
    int sayi=23;

    {
        //2.seviye
        int sayi=43;
        printf("sayi degiskeni=%d\n",sayi);
    }

    printf("sayi degiskeni =%d\n",sayi);


    /* Bir deðiþkene eriþmek istendiðinde ilk önce bulunan kod bloðunun içine bakýlýr orada yoksa üst seviyeye bakýlýr. */

    // örnek

    {   /* bu kod blogu içersinde sayi degiskeni olmadýðý için bir üst sevieye bakar.*/
        printf("sayi degiskeni= %d",sayi);
    }


    /* Bir kod blokunda tanýmlanmýþ bir deðiþkene sadece o kod blokunda ve daha içteki  kod bloklarýndan eriþilebilri. ?*/


    return 0;
}
