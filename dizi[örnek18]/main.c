#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,gecici,sayi;
    int dizi[10]={25,22,17,19,47,3,98,5,124,10};
    printf("Dizideki en kucuk kacinci degeri istiyorsunuz.\n");
    scanf("%d",&sayi);

    for(i=0;i<10-1;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                gecici=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=gecici;

            }
        }
    }


    for(i=0;i<10;i++)
    {
        printf("%4d",dizi[i]);
    }


    printf("\nDizideki en kucuk %d.deger = %d",sayi,dizi[sayi-1]);



    return 0;
}
