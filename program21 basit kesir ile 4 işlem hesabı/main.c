#include <stdio.h>
#include <stdlib.h>

int main()
{
    char islem="";
    int sayi1,sayi2;

    do
    {
    printf("islemi seciniz (+,-)\n");
    scanf("%s",&islem);

    if(islem!='+'&&islem!='-')
        {
    printf("Lutfen +,- operatorlerinden birini giriniz.\n");
        }
    }while(islem!='+'&&islem!='-');
    do
    {
    printf("iki tam sayi giriniz.\n");
    scanf("%d%d",&sayi1,&sayi2);
    if(sayi1==0||sayi2==0)
    printf("Lutfen sifirdan farkli sayilar giriniz.\n");
    }while(sayi1==0||sayi2==0);

    if(islem=='+')
    {

        printf("1/%d+1/%d=%d/%d=%.2f",sayi1,sayi2,sayi1+sayi2,sayi1*sayi2,1/(float)sayi1+1/(float)sayi2);
    }
    else
    {

        printf("1/%d-1/%d=%d/%d=%.2f",sayi1,sayi2,sayi1-sayi2,sayi1*sayi2,1/(float)sayi1-1/(float)sayi2);
    }
    return 0;
}
