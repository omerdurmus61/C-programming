#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2;
    char islem;
    printf("islemi giriniz.\n");
    scanf("%c",&islem);
    printf("iki sayi  giriniz\n\n  ");
    scanf("%d%d",&sayi1,&sayi2);

    switch(islem)
    {
        case '+': printf("%d",sayi1+sayi2);
        break;
        case '-': printf("%d",sayi1-sayi2);
        break;
        case '*': printf("%d",sayi1*sayi2);
        break;
        case '/': printf("%d",sayi1/sayi2);
        break;
        default:
        break;
    }
    return 0;
}
