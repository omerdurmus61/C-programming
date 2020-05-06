#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,gecici;
   int adet;
   printf("Eleman adetini giriniz.\n");
   scanf("%d",&adet);
   int dizi[adet];

   printf("Dizi elemanlarini giriniz.\n");
   for(i=0;i<adet;i++)
   {
       printf("%d.elemani giriniz.\n",i+1);
       scanf("%d",&dizi[i]);
   }

   for(i=0;i<adet-1;i++)

    {
        for(j=0;j<adet-i-1;j++)
            {
                if(dizi[j]>dizi[j+1])
                {
                    gecici=dizi[j];
                    dizi[j]=dizi[j+1];
                    dizi[j+1]=gecici;
                }
            }
    }

    printf("Siralanmis dizi.\n");

    for(i=0;i<adet;i++)
   {
       printf("%5d",dizi[i]);

   }



   int aranacak;
   printf("\nAranacak elemani giriniz.\n");
   scanf("%d",&aranacak);
   int sagIndis=adet-1 ,ortaIndis,solIndis=0,bulundu=0;

    while(bulundu==0 && solIndis<=sagIndis)
    {
        ortaIndis=(sagIndis+solIndis)/2;

        if(aranacak==dizi[ortaIndis])
        {
            bulundu=1;
            break;
        }
        else if(aranacak<ortaIndis)
        {
            sagIndis=ortaIndis-1;
        }
        else if(aranacak>ortaIndis)
        {
            solIndis=ortaIndis+1;
        }
    }

    if(bulundu)
    {
        printf("Aranan eleman %d.indiste bulundu.\n",ortaIndis);
    }
    else
    {
        printf("Aranan eleman bulunamadi.\n");
    }


    return 0;
}
