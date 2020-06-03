#include <stdio.h>
#include <stdlib.h>

void toplamMatris(int matris[5][5],int satir,int sutun);

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


    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            {
                printf("%3d",matris[i][j]);
            }
            printf("\n");
    }

    printf("\n\n");

   toplamMatris(matris,5,5);


    return 0;
}
void toplamMatris(int matris[5][5],int satir,int sutun)
{
    int i,j,satirToplam=0,sutunToplam=0;

    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            satirToplam=satirToplam+matris[i][j];
        }
        printf("%d.satirdaki elemanlarin toplam=%d\n",i+1,satirToplam);
        satirToplam=0;
    }

    printf("\n\n");

    for(int i=0;i<sutun;i++)
    {
        for(int j=0;j<satir;j++)
        {
            sutunToplam=sutunToplam+matris[j][i];
        }
        printf("%d.sutundaki elemanlarin toplam=%d\n",i+1,sutunToplam);
        sutunToplam=0;
    }
}
