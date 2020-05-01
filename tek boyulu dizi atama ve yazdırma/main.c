#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int dizi[5];

    for(i=0;i<5;i++)
    {
       do
    {
        printf("Dizinin %d.elemani giriniz.\n",i+1);
        scanf("%d",&dizi[i]);

        if(dizi[i]%2==0)
        {
            printf("Cift sayi giremessiniz.\n");
        }
    }
       while(dizi[i]%2==0);
    }

    for(j=0;j<5;j++)
    {
        printf("%d.eleman = %d\n",j+1,dizi[j]);
    }

    return 0;
}
