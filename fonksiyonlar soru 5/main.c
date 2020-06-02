#include <stdio.h>
#include <stdlib.h>

int asalSayiMi(int );
void asalSayilariYazdirma(int );

int main()
{   int sayi;
    printf("bir sayi giriniz.\n");
    scanf("%d",&sayi);
    if(asalSayiMi(sayi)==1)
        printf("asal sayi.");
    else
        printf("asal sayi degil.");


    int sayi1;
    printf("\n\nbir sayi daha giriniz.\n");
    scanf("%d",&sayi1);
    asalSayilariYazdirma(sayi1);



    return 0;
}

int asalSayiMi(int sayi)
{
    for(int i=sayi-1;i>1;i--)
    {
        if(sayi%i==0)
            return 0;

    }

    return 1;
}
void asalSayilariYazdirma(int sayi)
{
    for(int i=sayi;i>1;i--)
    {
        if(asalSayiMi(i)>0)
        {
            printf("%d bir asal sayidir.\n",i);
        }
    }
}
