#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aranan,bulundu=0;
    int dizi[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int i;
    printf("aranacak sayiyi giriniz.\n");
    scanf("%d",&aranan);

    for( i=0;i<15;i++)
    {
        if(aranan==dizi[i])
         {
            bulundu=1;
            break;
         }

    }
    if(bulundu)
        printf("Aranan deger dizinin %d.elemani\n",i+1);
    else
        printf("aranan deger dizide yok.\n");

    return 0;
}
