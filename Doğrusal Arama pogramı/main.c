#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aranacakDizi[100];
    int aranacakBilgi,i;
    int bulunan_indis;

    //Dizi elemanlarý tanýmlanýr.

    for(i=0;i<100;i++)
    {
        aranacakDizi[i]=i*2;
    }

    printf("Aranan bilgiyi giriniz.\n");
    scanf("%d",&aranacakBilgi);

    //Doðrusal arama.

    for (i=0;i<100;i++)
    {
        if(aranacakDizi[i]==aranacakBilgi)
        {
            bulunan_indis=i;
            printf("Aranan bilgi = %d\n%d. indiste bulundu.\n",aranacakBilgi,bulunan_indis);
            break;
        }

    }


    return 0;
}
