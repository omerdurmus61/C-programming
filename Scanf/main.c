#include <stdio.h>
#include <stdlib.h>

int main()
{   char kelime[20];
printf("ismizini giriniz\n");
// BU KULLANIM YANLIÞTIR
// scanf("%s",&kelime);

//BU KULLLANIM DOÐRUDUR

scanf("%s",kelime);
printf("Merhaba %s",kelime);

/* BÝR DÝZÝ ÝSMÝ O DÝZÝNÝN ÝLK ELEMANININ BELLEK ADESÝNÝ TEMSÝL
 EDER BU YÜZDEN & ÝÞARETÝ KULLANMAYA GEREK YOKTUR
    */
    return 0;
}
