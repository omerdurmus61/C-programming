#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 50
int main()
{
    char metin[SIZE];


    char* sayiStr1 = "256";
    char* sayiStr2 = "558";
    char* sayiStr3 = "179.25";
    char* sayiStr4 = "247.32";

    int sayi1 = atoi(sayiStr1);
    int sayi2 = atoi(sayiStr2);
    int toplam1 = sayi1 + sayi2;
    printf("Toplam 1 -> %d\n",toplam1);

    float sayi3 = atof(sayiStr3);
    float sayi4 = atof(sayiStr4);
    float toplam2 = sayi3 + sayi4;
    printf("Toplam2 -> %d\n",toplam2);

    printf("bir karakter dizisi giriniz:");
    gets(metin);

    printf("Girdiginiz char dizisindeki sayisal karakterler:");

    // isDigit bir karakterin sayisal olup olmadýgýný kontrol eder
    int i;
    for (i=0 ; i<SIZE ; i++)
    {
        if(metin[i] == '\0')
            break;

        if(isdigit(metin[i])== 1){
            printf("%c",metin[i]);
        }
    }


    return 0;
}
