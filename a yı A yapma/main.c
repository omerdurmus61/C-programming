#include <stdio.h>
#include <stdlib.h>

int main()
{   /* char ile bir deðiþken tanýmladýðýmýz zaman ona eþitlediðimiz karakteri o deðiþkene atamaz onun ASCI Kod tablosundaki sayý karþýlýðýný atar böyle öðrenmeliyiz.*/
    char kucukHarf = 'a';

    char buyukHarf = kucukHarf - 32 ;

    printf("buyuk harf = %c",buyukHarf);

    return 0;
}
