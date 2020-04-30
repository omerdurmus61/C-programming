#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sayi1,sayi2;
    char islem;

    printf("Birinci sayiyi giriniz.\n");
    scanf("%f",&sayi1);
    printf("ikinci sayiyi giriniz.\n");
    scanf("%f",&sayi2);
    printf("Yapilacak islemi giriniz.\n");
    scanf("%c",&islem);

    switch(islem)
    {
        case '+': printf("%.2f + %.2f = %.2f",sayi1,sayi2,sayi1+sayi2);
        break;
        case '-': printf("%.2f - %.2f = %.2f",sayi1,sayi2,sayi1-sayi2);
        break;
        case '*': printf("%.2f * %.2f = %.2f",sayi1,sayi2,sayi1*sayi2);
        break;
        case '/': printf("%.2f / %.2f = %.2f",sayi1,sayi2,sayi1/sayi2);
        break;
    }

    return 0;
}
