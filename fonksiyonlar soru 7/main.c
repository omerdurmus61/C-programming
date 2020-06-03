#include <stdio.h>
#include <stdlib.h>

int enKucukElemaniBul(int [],int);
int enBuyukElemaniBul(int [],int);

int main()
{
   int dizi[10]={1,12,3,5,23,22,100,122,11,0};

   printf("en kucuk eleman=%d\n",enKucukElemaniBul(dizi,10));
   printf("en buyuk eleman=%d",enBuyukElemaniBul(dizi,10));


    return 0;
}
int enKucukElemaniBul(int dizi[],int elemanSayisi)
{   int i,j,gecici;
    for(i=0;i<elemanSayisi-1;i++)
    {
        for(j=0;j<elemanSayisi-1-i;j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                gecici=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=gecici;
            }
        }
    }

        return dizi[0];
}
int enBuyukElemaniBul(int dizi[],int elemanSayisi)
{
    int i,j,gecici;
    for(i=0;i<elemanSayisi-1;i++)
    {
        for(j=0;j<elemanSayisi-1-i;j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                gecici=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=gecici;
            }
        }
    }
    return dizi[9];
}
