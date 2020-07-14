#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,n;

    float x,seri;

    char cevap;



   do
   {

    printf("Pozitif bir tam sayi giriniz.\n");
    scanf("%d",&n);

    printf("Reel bir sayi giriniz.\nBu seri hesaplamasindan sonra devam etmek istiyor musunuz?(Evet: E , e)\n");
    scanf("%f %c",&x,&cevap);

    printf("seri=");



        for(i=1;i<=2*n-1;i+=2)
    {
        seri+=i/pow(x,i+1);
        if(i!=2*n-1)
        {
        printf("%d/%.2f^%d+",i,x,i+1);
        }
        else
        {
        printf("%d/%.2f^%d",i,x,i+1);

        printf("\ntoplam seri=%.2f\n",seri);


        }

    }



   }while(cevap == 'E' ||  cevap == 'e');

    return 0;
}
