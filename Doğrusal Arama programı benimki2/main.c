#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arananBilgi;
    int dizi[15]= {38, 108, 47, 78, 11, 148, 50, 138, 30, 31, 89, 105, 56, 81, 80};
    int bulundu_mu=0;

    printf("Dizi elemanlari.\n");
    int i,j;
    for(i=0;i<15;i++)
    {
        printf("%d\n",dizi[i]);
    }
    printf("Hangi bilgiyi aramak istiyorsunuz.\n");
    scanf("%d",&arananBilgi);

    for(j=0;j<15;j++)
    {
        if(dizi[j]==arananBilgi)
            {
                bulundu_mu=1;
                break;
            }
    }

    if(bulundu_mu)
    {
        printf("Aranan bilgi= %d\n%d dizinin %d.elemani",arananBilgi,arananBilgi,j+1);
    }
    else
    {
        printf("Aranan bilgi dizide bulunmamaktadir.");
    }
    return 0;
}
