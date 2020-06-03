#include <stdio.h>
#include <stdlib.h>

int toplamMatris(int matris[5][5],int satir,int sutun);


int main()
{
    int matris[5][5];
    int a=1;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            {
                matris[i][j]=a;
                a++;
            }
    }

   printf("matrisin elemanlari toplami =%d",toplamMatris(matris,5,5));

    return 0;
}

int toplamMatris(int matris[5][5],int satir,int sutun)
{
    int toplam=0;

    for(int i=0;i<satir;i++)
    {
        for(int j=0;j<sutun;j++)
            {
                toplam=toplam+matris[i][j];
            }
    }

    return toplam;
}
