#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sayi;
    printf("Bir sayi giriniz.\n");
    scanf("%f",&sayi);

    printf("f(x)=x^3+13x^2+47x+5\n");
    printf("x=%.2f icin\n"
           ">>f(%.2f)=%.3f",sayi,sayi,(sayi*sayi*sayi+13*sayi*sayi+47*sayi+5));
    return 0;
}
