#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void aylariSiralamaVeYazdirma(char dizi[12][100], char siraliDizi[12][100]);

	char aylar[12][100];
    char sirali_aylar[12][100];
    char *p_aylar[12];

int main()
{
  

    //1.soru
    int i=0;
    printf("Lutfen aylari giriniz.\n");
    do
    {
        scanf("%s",aylar[i]);
        i++;

    }while(i<12);



    //2.soru
    int j=0;
    for(j=0;j<12;j++)
    {
        p_aylar[j]=&aylar[j];

    }


    aylariSiralamaVeYazdirma(aylar,sirali_aylar);
    
  

    return 0;
}
//3.soru
void aylariSiralamaVeYazdirma(char dizi[12][100],char siraliDizi[12][100])
{
    int i,j;
    char gecici[100];

    for(i=0;i<11;i++)
    {
        for(j=0;j<11;j++)
        {

           if(strcmp(dizi[j],dizi[j+1])>0)
           {
               strcpy(gecici,dizi[j]);
               strcpy(dizi[j],dizi[j+1]);
               strcpy(dizi[j+1],gecici);

           }

        }
    }
        printf("\n---------------------------------\n");
        printf("Alfabetik siralama.\n");
        int a;
    for( a=0;a<12;a++)
    {
        strcpy(siraliDizi[a],dizi[a]);

        printf("\n%s\n",siraliDizi[a]);

    }
      printf("\n---------------------------------\n");



}
