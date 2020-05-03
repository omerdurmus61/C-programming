#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10]={25,22,17,19,47,3,98,5,124,10};
    int sayi,i;

    printf("bir sayi giriniz.\n");
    scanf("%d",&sayi);

    printf("Dizinini bu elemanlari sizin girdiginiz sayi ile kalansiz bolunuyor.\n");

    for(i=0;i<10;i++)
    {
        if(dizi[i]%sayi==0)
        {
            printf("%d\n",dizi[i]);
        }
    }

    return 0;
}
