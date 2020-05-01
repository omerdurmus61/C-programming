#include <stdio.h>
#include <stdlib.h>

int main()
{   int dizi[25] = {2, 3, 4, 9, 12, 18, 28, 34, 36, 43, 46, 48, 49, 51, 52, 53, 56, 57, 69, 72, 74, 85, 94, 95, 97};
    int hedef;
    int solIndis=0;
    int sagIndis=24;
    int ortaIndis;
    int bulundu=0;

    printf("Aranacak bilgi.\n");
    scanf("%d",&hedef);

    while(bulundu==0 && solIndis<=sagIndis)
    {
        ortaIndis=(sagIndis+solIndis)/2;
        if(hedef == dizi[ortaIndis])
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
        printf("Bulundu %d elemani %d.indis.\n",hedef,ortaIndis);
    }
    else
    {
        printf("Bulunamadi.");
    }
    return 0;
}
