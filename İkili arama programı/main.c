#include <stdio.h>
#include <stdlib.h>

int main()
{   int dizi[25] = {2, 3, 4, 9, 12, 18, 28, 34, 36, 43, 46, 48, 49, 51, 52, 53, 56, 57, 69, 72, 74, 85, 94, 95, 97};
    int bulundu=0;
    int sagIndis=24;
    int solIndis=0;
    int ortaIndis;
    int hedef;

    printf("Aranacak elemani giriniz.\n");
    scanf("%d",&hedef);

    while(bulundu==0 && solIndis<=sagIndis)
    {
        ortaIndis=(solIndis+sagIndis)/2;
        if(hedef==dizi[ortaIndis])
        {
            bulundu=1;
            break;
        }
        else if(hedef<dizi[ortaIndis])
        {
            sagIndis=ortaIndis-1;
        }
        else if(hedef>dizi[ortaIndis])
        {
            solIndis=ortaIndis+1;
        }
    }


    if(bulundu)
    {
        printf("Bulundu %d elemani\n%d.eleman\n%d.indis",hedef,ortaIndis+1,ortaIndis);
    }
    else
    {
        printf("Bu eleman dizi icerisinde yok.");
    }
    return 0;
}
