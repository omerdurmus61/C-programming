#include <stdio.h>
#include <stdlib.h>

int enKucukNinciEleman(int [],int , int);

int main()
{
    int dizi[10]={0,2,6,5,8,1,23,61,99,100};
    int n;

    printf("dizideki en kucuk kacinci elemani istiyorsunuz.\n");
    scanf("%d",&n);

    printf("dizideki en kucuk %d.eleman=%d\n",n,enKucukNinciEleman(dizi,10,n));


    return 0;
}

int enKucukNinciEleman(int dizi[],int elemanSayisi, int n)
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

    return dizi[n-1];


}
