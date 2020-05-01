#include <stdio.h>
#include <stdlib.h>

int main()
{
    float floatPiSayisi = 3.14159265358979323846;
    float digerOndalikSayi = 2.71;

    printf("floatPiSayisi degiskeninin degeri: %f\n",floatPiSayisi);
    printf("floatPiSayisi degiskeninin degeri: %.2f\n",floatPiSayisi);
    printf("floatPiSayisi degiskeninin degeri: %.10f\n",floatPiSayisi);
    printf("digerOndalikSayi degiskeninin degeri: %f\n",digerOndalikSayi);
     printf("digerOndalikSayi degiskeninin degeri: %1.15f\n",digerOndalikSayi);
    return 0;
}
